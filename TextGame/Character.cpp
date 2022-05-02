#include "Character.h"

Character::Character()
{
	this->health = healthMax;
	this->focus = focusMax;

}

Character::Character(std::string name)
{
	this->name = name;
	this->healthMax = 30;
	this->health = healthMax;
	this->focusMax = 10;
	this->focus = focusMax;
	this->level = 1;
	this->exp = 0;
	this->staminaMax = 20;
	this->stamina = staminaMax;
	this->hunger = 0;
	this->hungerMax = 100;
	this->thirst = 0;
	this->thirstMax = 100;

	this->strength = 1;
	this->endurance = 1;
	this->intelligence = 1;
	this->wisdom = 1;
	this->luck = 1;
	this->charisma = 1;
	this->dexterity = 1;

	this->arcane = 1;
	this->arcaneExp = 0;
	this->foraging = 1;
	this->foragingExp = 0;
	this->pathFinding = 1;
	this->pathFindingExp = 0;
	this->extraSensory = 1;
	this->extraSensoryExp = 0;

}

Character::~Character()
{
}

void Character::interact()
{

}

void Character::update()
{
}

void to_json(nlohmann::json& j, const Character& c)
{
	j = nlohmann::json
	{ 
		{"name", c.name},{"healthmax", c.healthMax}, {"focusmax", c.focusMax}, {"level", c.level}, {"exp", c.exp},
		{"staminamax", c.staminaMax}, {"hungermax", c.hungerMax}, {"thirstmax", c.thirstMax}, {"strength", c.strength},
		{"endurance", c.endurance}, {"intelligence", c.intelligence}, {"wisdom", c.wisdom}, {"luck", c.luck}, 
		{"charisma", c.charisma}, {"dexterity", c.dexterity}, {"arcane", c.arcane}, {"arcaneexp", c.arcaneExp}, 
		{"foraging", c.foraging}, {"foragingexp", c.foragingExp}, {"pathfinding", c.pathFinding}, 
		{"pathfindingexp", c.pathFindingExp}, {"extrasensory", c.extraSensory}, {"extrasensoryexp", c.extraSensoryExp} };
}

void from_json(const nlohmann::json& j, Character& c)
{
	j.at("name").get_to(c.name), j.at("healthmax").get_to(c.healthMax);
	j.at("focusmax").get_to(c.focusMax), j.at("level").get_to(c.level);
	j.at("exp").get_to(c.exp), j.at("staminamax").get_to(c.staminaMax);
	j.at("hungermax").get_to(c.hungerMax), j.at("thirstmax").get_to(c.thirstMax);
	j.at("strength").get_to(c.strength), j.at("endurance").get_to(c.endurance);
	j.at("intelligence").get_to(c.intelligence), j.at("wisdom").get_to(c.wisdom);
	j.at("luck").get_to(c.luck), j.at("charisma").get_to(c.charisma);
	j.at("foraging").get_to(c.foraging), j.at("foragingexp").get_to(c.foragingExp);
	j.at("pathfinding").get_to(c.pathFinding), j.at("pathfindingexp").get_to(c.pathFindingExp);
	j.at("extrasensory").get_to(c.extraSensory), j.at("extrasensoryexp").get_to(c.extraSensoryExp);
}
