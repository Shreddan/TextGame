#include "Character.h"

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
