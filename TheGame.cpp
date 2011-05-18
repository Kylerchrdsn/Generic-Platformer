#include "theGame.h"

TheGame::TheGame()
{
    //ctor
}

TheGame::~TheGame()
{

}

bool TheGame::initialize()
{
    SDL_Init(SDL_INIT_EVERYTHING);
    return 1;
}
