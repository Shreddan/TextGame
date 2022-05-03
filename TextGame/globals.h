#pragma once
#include <single_include/nlohmann/json.hpp>

class Character;
class Region;
struct Room;

using json = nlohmann::json;

void to_json(json& j, const Character& c);
void from_json(const json& j, Character& c);
void to_json(json& j, const Region& r);
void from_json(const json& j, Region& r);
void to_json(json& j, const Room& rm);
void from_json(const json& j, Room& rm);