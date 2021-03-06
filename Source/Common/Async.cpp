/* Copyright (c) 2020 Jin Li, http://www.luvfight.me

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. */

#include "Const/Header.h"
#include "Common/Async.h"
#include "Basic/Director.h"
#include "Basic/Scheduler.h"

NS_DOROTHY_BEGIN

// Async

Async::Async():
_scheduled(false),
_paused(false)
{ }

Async::~Async()
{
	if (_thread.isRunning())
	{
		Async::cancel();
		Async::stop();
	}
}

void Async::stop()
{
	if (_thread.isRunning())
	{
		_workerEvent.post("Stop"_slice);
		_workerSemaphore.post();
		_thread.shutdown();
	}
}

void Async::run(const function<Ref<Values>()>& worker, const function<void(Values*)>& finisher)
{
	if (!_thread.isRunning())
	{
		_thread.init(Async::work, this);
	}
	if (!_scheduled)
	{
		_scheduled = true;
		SharedDirector.getSystemScheduler()->schedule([this](double deltaTime)
		{
			DORA_UNUSED_PARAM(deltaTime);
			for (Own<QEvent> event = _finisherEvent.poll();
				event != nullptr;
				event = _finisherEvent.poll())
			{
				Package* package;
				Ref<Values> result;
				event->get(package, result);
				package->second(result);
				delete package;
			}
			return false;
		});
	}
	auto package = new Package(worker, finisher);
	_workerEvent.post("WorkDone"_slice, package);
	_workerSemaphore.post();
}

void Async::run(const function<void()>& worker)
{
	if (!_thread.isRunning())
	{
		_thread.init(Async::work, this);
	}
	auto work = new function<void()>(worker);
	_workerEvent.post("Work"_slice, work);
	_workerSemaphore.post();
}

int Async::work(bx::Thread* thread, void* userData)
{
	DORA_UNUSED_PARAM(thread);
	Async* worker = r_cast<Async*>(userData);
	while (true)
	{
		for (Own<QEvent> event = worker->_workerEvent.poll();
			event != nullptr;
			event = worker->_workerEvent.poll())
		{
			switch (Switch::hash(event->getName()))
			{
				case "Work"_hash:
				{
					function<void()>* worker;
					event->get(worker);
					(*worker)();
					delete worker;
					break;
				}
				case "WorkDone"_hash:
				{
					Package* package;
					event->get(package);
					Ref<Values> result = package->first();
					worker->_finisherEvent.post(Slice::Empty, package, result);
					break;
				}
				case "Stop"_hash:
				{
					return 0;
				}
			}
		}
		if (worker->_paused)
		{
			worker->_paused = false;
			worker->_pauseSemaphore.post();
		}
		worker->_workerSemaphore.wait();
	}
	return 0;
}

void Async::pause()
{
	if (_thread.isRunning())
	{
		for (Own<QEvent> event = _workerEvent.poll();
			event != nullptr;
			event = _workerEvent.poll())
		{
			switch (Switch::hash(event->getName()))
			{
				case "Work"_hash:
				{
					function<void()>* worker;
					event->get(worker);
					_workers.push_back(worker);
					break;
				}
				case "WorkDone"_hash:
				{
					Package* package;
					event->get(package);
					_packages.push_back(package);
					break;
				}
			}
		}
		_paused = true;
		_workerSemaphore.post();
		_pauseSemaphore.wait(); // wait for worker to stop
	}
}

void Async::resume()
{
	if (_thread.isRunning() && !_packages.empty())
	{
		for (Package* package : _packages)
		{
			_workerEvent.post("WorkDone"_slice, package);
		}
		for (function<void()>* worker : _workers)
		{
			_workerEvent.post("Work"_slice, worker);
		}
		_packages.clear();
		_workers.clear();
		_workerSemaphore.post(); // make worker work again
	}
}

void Async::cancel()
{
	for (Own<QEvent> event = _workerEvent.poll();
		event != nullptr;
		event = _workerEvent.poll())
	{
		switch (Switch::hash(event->getName()))
		{
			case "Work"_hash:
			{
				function<void()>* worker;
				event->get(worker);
				delete worker;
				break;
			}
			case "WorkDone"_hash:
			{
				Package* package;
				event->get(package);
				delete package;
				break;
			}
		}
	}
	for (Package* package : _packages)
	{
		delete package;
	}
	_packages.clear();
	for (function<void()>* worker : _workers)
	{
		delete worker;
	}
	_workers.clear();
}

// AsyncThread

AsyncThread::AsyncThread():
_nextProcess(0),
_process(std::max(std::thread::hardware_concurrency(), 4u) - 1)
{
	for (int i = 0; i < s_cast<int>(_process.size()); i++)
	{
		_process[i] = New<Async>();
	}
}

void AsyncThread::run(const function<Ref<Values>()>& worker, const function<void(Values*)>& finisher)
{
	Async* async = _process[_nextProcess];
	async->run(worker, finisher);
	_nextProcess = (_nextProcess + 1) % _process.size();
}

NS_DOROTHY_END
