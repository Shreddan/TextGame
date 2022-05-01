#include "GameEngine.h"


GameEngine::GameEngine()
{
    this->Running = true;
    this->option = 0;
}

GameEngine::~GameEngine()
{
}

void GameEngine::update()
{
    while (this->option != 2)
    {
        std::getline(std::cin, input);

        for (int i = 0; i < input.size(); i++)
        {
            input[i] = std::tolower(input[i]);
        }
        parse(input);
        input.clear();
        
    }
   }

void GameEngine::parse(std::string& input)
{
    std::cout << std::endl;

    option = convertStrToCMD(input);

    switch (option)
    {
        case 0:
        {
            ResetColour();
            std::cout << "Command not recognised try [help] for more information" << std::endl;
            std::cout << std::endl;
            break;
        }
        case 1:
        {
            ResetColour();
            std::cout << "This is the help screen ( type the commands without the ] )" << std::endl;
            std::cout << "to create a new character type [new]" << std::endl;
            std::cout << "to load an existing character type [load]" << std::endl;
            std::cout << "to delete an existing character type [delete]" << std::endl;
            std::cout << std::endl;
            break;
        }
        case 3:
        {
            std::cout << "Character Creation initialising" << std::endl;
            std::cout << std::endl;
            CreateCharacter();
            break;
        }
        case 4:
        {
            LoadCharacters();
            break;
        }
    }
    
}

int GameEngine::convertStrToCMD(std::string& str)
{
    

    std::regex r("(\\w+) *(\\w*) *(\\w*)");
    std::smatch rs;

    if (std::regex_search(str, rs, r))
    {
        std::cout << std::endl;
    }

    
    //std::cout << rs.length() << std::endl;
    if (rs[0] == "help")
    {
        return 1;
    }
    else if (rs[0] == "quit" || rs[0] == "q")
    {
        return 2;
    }
    else if (rs[0] == "new character")
    {
        return 3;
    }
    else if (rs[0] == "characters")
    {
        return 4;
    }
    else
    {
        return 0;
    }
    
    
}

void GameEngine::OutputColour(int type)
{
    switch (type)
    {
    case System:
    {
        std::cout << ESC << START << FGYELLOW << std::flush;
        break;
    }
    case Hostile:
    {
        std::cout << ESC << START << FGRED << std::flush;
        break;
    }
    case Player:
    {
        std::cout << ESC << START << FGGREEN << std::flush;
        break;
    }
    case Npc:
    {
        std::cout << ESC << START << FGBLUE << std::flush;
        break;
    }
    }
}

void GameEngine::ResetColour()
{
    std::cout << ESC << START << NORMAL << "m" << std::flush;
}

void GameEngine::checkDirectory(std::string p)
{
    if (std::filesystem::exists(p))
    {
        ResetColour();
        std::cout << "Directory exists!" << std::endl;
        
    }
    else
    {
        std::filesystem::create_directory(p);
        if (std::filesystem::exists(p))
        {
            std::cout << "Directory created!" << std::endl;
        }
    }
}


void GameEngine::CreateCharacter()
{
    std::string name;
    OutputColour(0);
    std::cout << "Enter a name for your character" << std::endl;
    std::cout << std::endl;
    std::getline(std::cin, name);
    player = new Character(name);

    std::ofstream o{ characters / name };
}

void GameEngine::LoadCharacters()
{
    if (!std::filesystem::is_empty(characters))
    {
        for (auto const& dir_entry : std::filesystem::directory_iterator{ characters })
        {
            Characters.push_back(dir_entry.path().stem().string());
        }

        for (size_t i = 0; i < Characters.size(); i++)
        {
            std::cout << Characters[i] << std::endl;
        }
    }
    else
    {
        std::cout << "No Characters found :(" << std::endl;
        return;
    }
    
}

