#include "GameEngine.h"



int main()
{
    GameEngine g;
    std::string input = "";

    std::cout << "Welcome to my text game...." << std::endl;
    std::cout << "theres nothing really here yet, but hopefully.... soon" << std::endl;
    std::cout << "Type [help] to learn the commands you can do" << std::endl;
    std::cout << std::endl;

    while (g.getRunning())
    {
        std::getline(std::cin, input);
        g.parse(input);
        input.clear();
    }
    

    return 0;
}

