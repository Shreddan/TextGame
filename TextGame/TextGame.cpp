#include "GameEngine.h"



int main()
{
    SetConsoleMode(GetStdHandle(STD_OUTPUT_HANDLE), ENABLE_PROCESSED_OUTPUT | ENABLE_VIRTUAL_TERMINAL_PROCESSING);

    GameEngine g;

    std::cout << std::format("{}{}{};{}Welcome to my text game....", ESC, START, UNDERLINE, FGRED) << std::endl;
    std::cout << ESC << START << NORMAL << "m" << std::flush;
    std::cout << std::format ("{}{}{};{}theres nothing really here yet, but hopefully.... soon", ESC, START, BOLD, FGGREEN) << std::endl;
    std::cout << ESC << START << NORMAL << "m" << std::flush;
    std::cout << std::format ("{}{}{}Type [help] to learn the commands you can do", ESC, START, FGYELLOW) << std::endl;
    std::cout << std::endl;
    std::cout << ESC << START << NORMAL << "m" << std::flush;

    g.update();
    
    //getchar();
    return 0;
}

