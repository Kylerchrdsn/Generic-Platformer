#include "Level.h"

Level::Level(const int screenHeight, const int screenWidth, const std::string& name) : BG(0)
{
    setLevelHeight(0);
    setLevelWidth(0);
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
