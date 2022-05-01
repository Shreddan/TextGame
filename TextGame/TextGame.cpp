#include "GameEngine.h"



int main()
{
    SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_PROCESSED_OUTPUT | ENABLE_VIRTUAL_TERMINAL_PROCESSING);

    GameEngine g;

    g.OutputColour(g.System);
    std::cout << "Welcome to my text game...." << std::endl;
    g.OutputColour(g.Hostile);
    std::cout << "theres nothing really here yet, but hopefully....soon" << std::endl;
    g.OutputColour(g.Player);
    std::cout << "Type [help] to learn the commands you can do" << std::endl;
    std::cout << std::endl;
    g.ResetColour();

    g.checkDirectory("Characters");
    g.update();
    
    return 0;
}

