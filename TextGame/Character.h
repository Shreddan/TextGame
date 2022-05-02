#pragma once
#include <string>
#include "Entity.h"

class Character : public Entity
{
public:
	Character(std::string name);
	~Character();

	void Interact();


	//Getters
	std::string getName() { return this->name; }
	int getHealthmax() { return this->healthMax; }
	int getFocusmax() { return this->focusMax; }
	int getLevel() { return this->level; }
	int getExp() { return this->exp; }
	int getStaminamax() { return this->staminaMax; }

	int getStrength() { return this->strength; }

private:

	//Char vars
	std::string name;
	int health;
	int healthMax;
	int focus;
	int focusMax;
	int level;
	int exp;
	int stamina;
	int staminaMax;

	//Char Stats
	int strength;
	int endurance;
	int intelligence;
	int wisdom;
	int luck;
	int charisma;
	int dexterity;


	//Char Skills + EXP
	int Arcane;
	int ArcaneExp;
	int Foraging;
	int ForagingExp;
	int PathFinding;
	int PathFindingExp;
	int ExtraSensory;
	int ExtraSensoryExp;


};

