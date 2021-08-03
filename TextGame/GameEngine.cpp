#include "GameEngine.h"


GameEngine::GameEngine()
{
    this->Running = true;

}

GameEngine::~GameEngine()
{
}

void GameEngine::parse(std::string& input)
{
    std::cout << std::endl;
    if (input == "help")
    {
        std::cout << "This is the help screen ( type the commands without the [] )" << std::endl;
        std::cout << "to create a new character type [new character]" << std::endl;
        std::cout << "to load an exister character type [load character]" << std::endl;
        std::cout << "to delete an existing character type [delete character]" << std::endl;
    }
    else if (input == "new character")
    {
        std::cout << "when I impliment this it will create a new character with one of the available classes" << std::endl;
    }
    else if (input == "q" || "quit")
    {
        Running = false;
        exit(0);
    }
    else
    {
        std::cout << "Command not recognised try [help] for more information" << std::endl;
    }
}

bool GameEngine::getRunning()
{
    return Running;
}


