#include "Region.h"

Region::Region()
{
}

Region::~Region()
{
}

void to_json(nlohmann::json& j, const Region& r)
{
	j = nlohmann::json
	{
		{"area", r.Area}, {"rooms", r.rooms}
	};
	
}

void from_json(const nlohmann::json& j, Region& r)
{
	j.at("area").get_to(r.Area), j.at("rooms").get_to(r.rooms);
}

void to_json(json& j, const Room& rm)
{
	j = nlohmann::json
	{
		{"x", rm.x}, {"y", rm.y}, {"exits", rm.exits}
	};
}

void from_json(const json& j, Room& rm)
{
	j.at("x").get_to(rm.x), j.at("y").get_to(rm.y);
	j.at("exits").get_to(rm.exits);
}
