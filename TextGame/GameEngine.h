#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include <format>
#include <single_include/nlohmann/json.hpp>
#include "System.h"
#include <regex>

class GameEngine
{
public:
	GameEngine();
	~GameEngine();

	void update();
	void parse(std::string& input);
	int convertStrToCMD(std::string& str);

	//bool getRunning();

private:
	bool Running;
	std::string input;
	int option;
	
};

