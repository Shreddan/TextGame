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
	int arcane;
	int arcaneExp;
	int foraging;
	int foragingExp;
	int pathFinding;
	int pathFindingExp;
	int extraSensory;
	int extraSensoryExp;


};

void to_json(nlohmann::json& j, const Character& c);
void from_json(const nlohmann::json& j, Character& c);

