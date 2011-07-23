#include "Level.h"

Level::Level(const int screenHeight, const int screenWidth, const std::string& name)
{
    BG = new Sprite();
    setLevelHeight(0);
    setLevelWidth(0);
    camera_.w = screenWidth;
    camera_.h = screenHeight;

    setName(name);
}

//**********************************************************
Level::Level(const std::string& fileName, const int screenHeight, const int screenWidth, const std::string& name)
{
    BG = new Sprite(0, 0, fileName);
    setLevelHeight(BG->h());
    setLevelWidth(BG->w());
    camera_.w = screenWidth;
    camera_.h = screenHeight;

    setName(name);
}

//**********************************************************
Level::~Level()
{
    delete BG;
}

//**********************************************************
void Level::addEnemy(int type, int number)
{

}

//**********************************************************
void Level::addPlat(Platform* plat)
{
    path_.push_back(plat);
}

void Level::addToon(Toon* tempToon)
{
    toons_.push_back(tempToon);
}

//**********************************************************
void Level::setLevelHeight(int height)
{
    LEVEL_HEIGHT = height;
}

//**********************************************************
void Level::setLevelWidth(int width)
{
    LEVEL_WIDTH = width;
}

//**********************************************************
void Level::setXPos(const int x)
{
    BG->setXPos(x);
}

void Level::setPlatX(int plat, int x)
{
    path_[plat]->setXPos(x);
}

void Level::setPlatY(int plat, int y)
{
    path_[plat]->setYPos(y);
}

//**********************************************************
void Level::setYPos(const int y)
{
    BG->setYPos(y);
}

void Level::show(SDL_Surface* screen)
{
    BG->show(screen);

    std::vector<Platform*>::iterator iter;
    iter = path_.begin();

    while(iter != path_.end())
    {
        (*iter)->show(screen);
        iter++;
    }
}
