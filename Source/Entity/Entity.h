/* Copyright (c) 2018 Jin Li, http://www.luvfight.me

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE. */

#pragma once
#include "Entity/Component.h"

NS_DOROTHY_BEGIN

class Dictionary;
class Entity;

typedef Delegate<void(Entity*)> EntityHandler;

class Entity : public Object
{
public:
	enum
	{
		Add,
		Change,
		AddOrChange,
		Remove
	};
	Entity(int index);
	virtual ~Entity();
	virtual bool init() override;
	PROPERTY_READONLY(int, Index);
	PROPERTY_READONLY_CLASS(Uint32, Count);
	void destroy();
	bool has(String name) const;
	bool has(int index) const;
	void remove(String name);
	static Entity* create();
	static bool each(const function<bool(Entity*)>& func);
	static void clear();
	Com* getComponent(String name) const;
	Com* getCachedCom(String name) const;
	void clearComCache();
public:
	template<typename T>
	void set(String name, const T& value, bool rawFlag = false);
	template<typename T>
	const T& get(String name) const;
protected:
	bool hasCache(int index) const;
	int getIndex(String name);
	void remove(int index);
	Com* getComponent(int index) const;
	Com* getCachedCom(int index) const;
	void updateComponent(int index, Own<Com>&& com, bool add);
private:
	int _index;
	vector<Own<Com>> _components;
	vector<Own<Com>> _comCache;
	DORA_TYPE_OVERRIDE(Entity);
};

struct WRefEntityHasher
{
	std::hash<Entity*> hash;
	inline size_t operator () (const WRef<Entity>& entity) const
	{
		return hash(entity.get());
	}
};

class EntityGroup : public Object
{
public:
	EntityGroup(const vector<string>& components);
	virtual ~EntityGroup();
	virtual bool init() override;
	static EntityGroup* create(const vector<string>& components);
	static EntityGroup* create(Slice components[], int count);
public:
	template<typename Func>
	bool each(const Func& func);
	EntityGroup* every(const EntityHandler& handler);
public:
	void onAdd(Entity* entity);
	void onRemove(Entity* entity);
private:
	unordered_set<WRef<Entity>, WRefEntityHasher> _entities;
	vector<int> _components;
	DORA_TYPE_OVERRIDE(EntityGroup);
};

class EntityObserver : public Object
{
public:
	EntityObserver(int option, const vector<string>& components);
	virtual ~EntityObserver();
	virtual bool init() override;
	static EntityObserver* create(int option, const vector<string>& components);
	static EntityObserver* create(int option, Slice components[], int count);
public:
	template<typename Func>
	bool each(const Func& func);
	EntityObserver* every(const EntityHandler& handler);
public:
	void onEvent(Entity* entity);
	void clear();
private:
	int _option;
	unordered_set<WRef<Entity>, WRefEntityHasher> _entities;
	vector<int> _components;
	DORA_TYPE_OVERRIDE(EntityObserver);
};

template<typename T>
void Entity::set(String name, const T& value, bool rawFlag)
{
	int index = getIndex(name);
	Com* com = getComponent(index);
	if (rawFlag)
	{
		AssertIf(com == nullptr, "raw set non-exist component \"{}\"", name);
		auto content = com->as<T>();
		AssertIf(content == nullptr, "assign non-exist component \"{}\".", name);
		content->set(value);
		return;
	}
	if (com)
	{
		auto content = com->as<T>();
		AssertIf(content == nullptr, "assign non-exist component \"{}\".", name);
		updateComponent(index, com->clone(), false);
		content->set(value);
	}
	else
	{
		updateComponent(index, Com::alloc(value), true);
	}
}

template<typename T>
const T& Entity::get(String name) const
{
	Com* com = getComponent(name);
	AssertIf(com == nullptr, "access non-exist component \"{}\".", name);
	return com->to<T>();
}

template<typename Func>
bool EntityGroup::each(const Func& func)
{
	decltype(_entities) entities = _entities;
	for (Entity* entity : entities)
	{
		if (entity && func(entity)) return true;
	}
	return false;
}

template<typename Func>
bool EntityObserver::each(const Func& func)
{
	static decltype(_entities) entities;
	entities = _entities;
	for (Entity* entity : entities)
	{
		if (entity && func(entity)) return true;
	}
	return false;
}

NS_DOROTHY_END