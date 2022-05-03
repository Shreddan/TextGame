#pragma once
#include <single_include/nlohmann/json.hpp>
#include <vector>
#include "globals.h"

struct Room
{
	int x, y;
	bool exits[6];
};

class Region
{
public:
	Region();
	~Region();

	int Area;
	std::vector<Room> rooms;
};

