#pragma once
#include <string>
#include "Entity.h"

class Character : public Entity
{
public:
	
	Character(std::string name);
	~Character();

	void interact();
	void update();


	//Getters
	std::string getName() { return this->name; }
	int getHealthmax() { return this->healthMax; }
	int getFocusmax() { return this->focusMax; }
	int getLevel() { return this->level; }
	int getExp() { return this->exp; }
	int getStaminamax() { return this->staminaMax; }
	int getHungermax() { return this->hungerMax; }
	int getThirst() { return this->thirstMax; }

	int getStrength() { return this->strength; }
	int getEndurance() { return this->endurance; }
	int getIntelligence() { return this->intelligence; }
	int getWisdom() { return this->wisdom; }
	int getLuck() { return this->luck; }
	int getCharisma() { return this->charisma; }
	int getDexterity() { return this->dexterity; }

	int getArcane() { return this->arcane; }
	int getArcaneexp() { return this->arcaneExp; }
	int getForaging() { return this->foraging; }
	int getForagingexp() { return this->foragingExp; }
	int getPathfinding() { return this->pathFinding; }
	int getPathfindingexp() { return this->pathFindingExp; }
	int getExtrasensory() { return this->extraSensory; }
	int getExtrasensoryexp() { return this->extraSensoryExp; }


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

