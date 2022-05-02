#pragma once
#include <single_include/nlohmann/json.hpp>
#include "globals.h"

class Entity
{
public:
	Entity();
	~Entity();

	virtual void interact() = 0;
	virtual void update() = 0;
};

