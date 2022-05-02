#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <filesystem>
#include <fstream>
#include <format>
#include <single_include/nlohmann/json.hpp>
#include "System.h"
#include <regex>
#include "Character.h"

class GameEngine
{
public:
	GameEngine();
	~GameEngine();

	enum outType
	{
		System,
		Player,
		Npc,
		Hostile

	};

	void update();
	void parse(std::string& input);
	int convertStrToCMD(std::string& str);
	void outputColour(int type);
	void resetColour();
	void checkDirectory(std::string p);
	void createCharacter();
	void loadCharacters();
	void loadChar();
	void displayCharacters();
	void saveCharacter();

private:
	bool Running;
	std::string input;
	int option;
	std::vector<std::string> Characters;
	const std::filesystem::path characters{ "Characters" };
	Character* player;
	
};

 