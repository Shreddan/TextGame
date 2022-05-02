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
}

Character::~Character()
{
}

void Character::Interact()
{

}
