#pragma once
class Entity
{
public:
	Entity();
	~Entity();

	virtual void Interact() = 0; 
};

