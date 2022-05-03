#pragma once
#include <string>
#include "Entity.h"

class Character : public Entity
{
public:
	Character();
	Character(std::string name);
	~Character();

	void interact();
	void update();

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
	int hunger;
	int hungerMax;
	int thirst;
	int thirstMax;

	//Char Stats
	int strength;
	int endurance;
	int intelligence;
	int wisdom;
	int luck;
	int charisma;
	int dexterity;


	//Char Skills + EXP
	int arcane = 0;
	int arcaneExp = 0;
	int foraging = 0;
	int foragingExp = 0;
	int pathFinding = 0;
	int pathFindingExp = 0;
	int extraSensory = 0;
	int extraSensoryExp = 0;


};



