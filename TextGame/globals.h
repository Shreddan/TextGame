#pragma once
#include <single_include/nlohmann/json.hpp>

class Character;
class Region;

using json = nlohmann::json;

void to_json(json& j, const Character& c);
void from_json(const json& j, Character& c);
void to_json(json& j, const Region& r);
void from_json(const json& j, Region& r);