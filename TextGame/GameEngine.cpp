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
    loadCharacters();
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
            resetColour();
            std::cout << "Command not recognised try [help] for more information" << std::endl;
            std::cout << std::endl;
            break;
        }
        case 1:
        {
            resetColour();
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
            createCharacter();
            break;
        }
        case 4:
        {
            displayCharacters();
            break;
        }
        case 5:
        {
            loadChar();
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
    else if (rs[0] == "load character")
    {
        return 5;
    }
    else
    {
        return 0;
    }
    
    
}

void GameEngine::outputColour(int type)
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

void GameEngine::resetColour()
{
    std::cout << ESC << START << NORMAL << "m" << std::flush;
}

void GameEngine::checkDirectory(std::string p)
{
    if (std::filesystem::exists(p))
    {
        resetColour();
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


void GameEngine::createCharacter()
{
    std::string name;
    outputColour(0);
    std::cout << "Enter a name for your character" << std::endl;
    std::cout << std::endl;
    resetColour();
    std::getline(std::cin, name);
    player = new Character(name);

    saveCharacter();

    Characters.push_back(player->getName());
}

void GameEngine::loadCharacters()
{
    if (!std::filesystem::is_empty(characters))
    {
        for (auto const& dir_entry : std::filesystem::directory_iterator{ characters })
        {
            Characters.push_back(dir_entry.path().stem().string());
        }
    }
    else
    {
        std::cout << "No Characters found :(" << std::endl;
        return;
    }
    
}

void GameEngine::loadChar()
{
    std::string name;
    nlohmann::json j;

    std::cout << "Which character would you like to load?" << std::endl;
    std::cout << std::endl;

    std::getline(std::cin, name);

    for (size_t i = 0; i < name.size(); i++)
    {
        name[i] = std::tolower(name[i]);
    }

    if (std::filesystem::exists(characters / name))
    {
        if (std::filesystem::is_regular_file(characters / name))
        {
            std::ifstream ifs{ characters / name };
            j << ifs;
        }
    }
    else
    {
        std::cout << "Character does not exist :(" << std::endl;
        return;
    }

}

void GameEngine::displayCharacters()
{
    for (size_t i = 0; i < Characters.size(); i++)
    {
        std::cout << Characters[i] << std::endl;
    }
}

void GameEngine::saveCharacter()
{
    std::string lowercaseName = player->getName();

    for (size_t i = 0; i < lowercaseName.size(); i++)
    {
        lowercaseName[i] = std::tolower(lowercaseName[i]);
    }

    std::ofstream o{ characters / lowercaseName};
    nlohmann::json j;
    j["name"] = player->getName();
    j["healthmax"] = player->getHealthmax();
    j["focusmax"] = player->getFocusmax();
    j["level"] = player->getLevel();
    j["exp"] = player->getExp();
    j["staminamax"] = player->getStaminamax();
    j["strength"] = player->getStrength();
    j["endurance"] = player->getEndurance();
    j["intelligence"] = player->getIntelligence();
    j["wisdom"] = player->getWisdom();
    j["luck"] = player->getLuck();
    j["charisma"] = player->getCharisma();
    j["dexterity"] = player->getDexterity();
    j["arcane"] = player->getArcane();
    j["arcaneexp"] = player->getArcaneexp();
    j["foraging"] = player->getForaging();
    j["foragingexp"] = player->getForagingexp();
    j["pathfinding"] = player->getPathfinding();
    j["pathfindingexp"] = player->getPathfindingexp();
    j["extrasensory"] = player->getExtrasensory();
    j["extrasensoryexp"] = player->getExtrasensoryexp();

    o << std::setw(4) << j << std::endl;
}

