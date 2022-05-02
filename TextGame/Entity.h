#pragma once
class Entity
{
public:
	Entity();
	~Entity();

	virtual void interact() = 0;
	virtual void update() = 0;
};

