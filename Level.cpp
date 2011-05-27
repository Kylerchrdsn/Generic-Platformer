#include "Level.h"

Level::Level(const int screenHeight, const int screenWidth, const std::string& name)
{
    BG = new Sprite();
    setLevelHeight(0);
    setLevelWidth(0);
    camera.w = screenWidth;
    camera.h = screenHeight;

    setName(name);
}

//**********************************************************
Level::Level(const std::string& fileName, const int screenHeight, const int screenWidth, const std::string& name)
{
    BG = new Sprite(0, 0, fileName);
    setLevelHeight(BG->h());
    setLevelWidth(BG->w());
    camera.w = screenWidth;
    camera.h = screenHeight;

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

//**********************************************************
void Level::setYPos(const int y)
{
    BG->setYPos(y);
}

void Level::show(SDL_Surface* screen)
{
    BG->show(screen);
}
