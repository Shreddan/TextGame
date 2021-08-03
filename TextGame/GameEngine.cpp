#include "GameEngine.h"


GameEngine::GameEngine()
{
    this->Running = true;
    this->option = 0;
}

GameEngine::~GameEngine()
{
}

void GameEngine::parse(std::string& input)
{
    std::cout << std::endl;
    std::cout << input << std::endl;
    std::cout << std::endl;


    option = convertStrToCMD(input);

    switch (option)
    {
        default:
        {
            std::cout << "Command not recognised try [help] for more information" << std::endl;
            break;
        }
        case 1:
        {
            std::cout << "This is the help screen ( type the commands without the [] )" << std::endl;
            std::cout << "to create a new character type [new character]" << std::endl;
            std::cout << "to load an exister character type [load character]" << std::endl;
            std::cout << "to delete an existing character type [delete character]" << std::endl;
            break;
        }
        case 2:
        {
            Running = false;
            break;
        }
        case 3:
        {
            std::cout << "when I implement this it will create a new character with one of the available classes" << std::endl;
            break;
        }
    }
    
    option = 0;
}

int GameEngine::convertStrToCMD(std::string& str)
{
    if (str == "help")
    {
        return 1;
    }
    else if (str == "q" || "quit")
    {
        return 2;
    }
    else if (str == "new character")
    {
        return 3;
    }
    
}

bool GameEngine::getRunning()
{
    return Running;
}


