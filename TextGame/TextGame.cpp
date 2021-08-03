#include "GameEngine.h"
#include "System.h"


int main()
{
    SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_PROCESSED_OUTPUT | ENABLE_VIRTUAL_TERMINAL_PROCESSING);

    GameEngine g;
    std::string input = "";

    std::cout << std::format("{}{}Welcome to my text game....", ESC, RED) << std::endl;
    std::cout << std::format ("{}{}theres nothing really here yet, but hopefully.... soon", ESC, GREEN) << std::endl;
    std::cout << std::format ("{}{}Type [help] to learn the commands you can do", ESC, YELLOW) << std::endl;
    std::cout << std::endl;

    while (g.getRunning())
    {
        std::getline(std::cin, input);
        
        for (int i = 0; i < input.size(); i++)
        {
            input[i] = std::tolower(input[i]);
        }
        g.parse(input);
        input.clear();
    }
    

    return 0;
}

