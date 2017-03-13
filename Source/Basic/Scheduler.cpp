/* Copyright (c) 2017 Jin Li, http://www.luvfight.me

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. */

#include "Const/Header.h"
#include "Basic/Scheduler.h"
#include "Animation/Action.h"
#include "Support/Array.h"
#include "Node/Node.h"

NS_DOROTHY_BEGIN

class FuncWrapper : public Object
{
public:
	virtual bool update(double deltaTime) override
	{
		return func(deltaTime);
	}
	function<bool (double)> func;
	list<Ref<Object>>::iterator it;
	CREATE_FUNC(FuncWrapper);
protected:
	FuncWrapper(const function<bool (double)>& func):func(func) { }
	DORA_TYPE_OVERRIDE(FuncWrapper);
};

Scheduler::Scheduler():
_timeScale(1.0f),
_actionList(Array::create())
{ }

void Scheduler::setTimeScale(float value)
{
	_timeScale = std::max(0.0f, value);
}

float Scheduler::getTimeScale() const
{
	return _timeScale;
}

void Scheduler::schedule(Object* object)
{
	// O(1) insert operation
	_updateMap[object] = _updateList.insert(_updateList.end(), MakeRef(object));
}

void Scheduler::schedule(const function<bool (double)>& handler)
{
	FuncWrapper* func = FuncWrapper::create(handler);
	func->it = _updateList.insert(_updateList.end(), Ref<Object>(func));
}

void Scheduler::unschedule(Object* object)
{
	auto it = _updateMap.find(object);
	if (it != _updateMap.end())
	{
		// O(1) remove operation
		_updateList.erase(it->second);
		_updateMap.erase(it);
	}
}

void Scheduler::schedule(Action* action)
{
	if (action && action->_target && !action->isRunning())
	{
		action->_order = _actionList->getCount();
		_actionList->add(action);
		if (action->update())
		{
			unschedule(action);
		}
	}
}

void Scheduler::unschedule(Action* action)
{
	Ref<> ref(action);
	if (action && action->_target && action->isRunning()
		&& _actionList->get(action->_order) == action)
	{
		_actionList->fastRemoveAt(action->_order);
		if (action->_order < _actionList->getCount())
		{
			_actionList->get(action->_order).to<Action>()->_order = action->_order;
		}
	}
}

void Scheduler::doUpdate()
{
	if (_it != _updateList.rend())
	{
		/** save object ptrs on the stack memory and keep them referenced
		 in case they are deleted during iteration
		 */
		Ref<Object> item(*_it);
		++_it;
		doUpdate();
		if (item->update(_deltaTime))
		{
			FuncWrapper* func = DoraCast<FuncWrapper>(item.get());
			if (func)
			{
				_updateList.erase(func->it);
			}
			else unschedule(item);
		}
	}
}

bool Scheduler::update(double deltaTime)
{
	// not save _it and _deltaTime on the stack memory
	_deltaTime = deltaTime * _timeScale;
	_it = _updateList.rbegin();

	/* update actions */
	RefVector<> actionList(_actionList->data());
	for (size_t i = 0; i < actionList.size(); i++)
	{
		Action* action = actionList[i].to<Action>();
		action->_eclapsed += s_cast<float>(_deltaTime) * action->_speed;
		if (action->update())
		{
			Node* target = action->_target;
			unschedule(action);
			target->removeAction(action);
			target->emit("ActionEnd"_slice, action);
		}
	}

	doUpdate();
	return false;
}

NS_DOROTHY_END
