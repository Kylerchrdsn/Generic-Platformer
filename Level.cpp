#include "Level.h"

Level::Level() : BG(0)
{
    setName("Blank");
}

//********************************************
Level::~Level()
{
    delete BG;
}

//********************************************
void Level::addEnemy(int type, int number)
{

}
