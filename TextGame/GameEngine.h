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

	bool getRunning();

private:
	bool Running;
	
};

