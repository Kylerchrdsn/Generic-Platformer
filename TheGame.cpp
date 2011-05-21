#include "theGame.h"

TheGame::TheGame()
{
    setGameState(0);
}

TheGame::~TheGame()
{

}

//***************************************************
bool TheGame::initialize()
{
    SDL_Init(SDL_INIT_EVERYTHING);

    return 1;
}

//***************************************************
void TheGame::setGameState(int gameState)
{
    gameState_ = gameState;
}

void TheGame::doIntro()
{

}

void TheGame::doSelectSave()
{

}

void TheGame::doLevelI()
{

}

void TheGame::doMenu()
{

}

void TheGame::doExit()
{

}
