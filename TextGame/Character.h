#pragma once
#include <string>
#include "Entity.h"

class Character : public Entity
{
public:
	Character();
	~Character();

private:

	//Char vars
	std::string name;
	int Health;
	int HealthMax;
	int Focus;
	int FocusMax;
	int level;
	int exp;
	int stamina;

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

