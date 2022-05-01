#include "Character.h"

Character::Character(std::string name)
{
	this->name = name;
	this->HealthMax = 30;
	this->Health = HealthMax;
	this->FocusMax = 10;
	this->Focus = FocusMax;
}

Character::~Character()
{
}

void Character::Interact()
{

}
