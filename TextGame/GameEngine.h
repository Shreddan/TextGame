#pragma once
#include <iostream>
#include <iomanip>
#include <string>

class GameEngine
{
public:
	GameEngine();
	~GameEngine();

	void parse(std::string& input);
	int convertStrToCMD(std::string& str);

	bool getRunning();

private:
	bool Running;
	int option;
	
};

