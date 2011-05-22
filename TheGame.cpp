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

    screen = SDL_SetVideoMode(800, 600, 32, SDL_SWSURFACE);

    return 1;
}

//***************************************************
void TheGame::setGameState(int gameState)
{
    if(gameState_ > -1)
    {
        gameState_ = gameState;
    }
}

bool TheGame::doIntro()
{
    while(SDL_PollEvent(&gEvent))
    {
        if(gEvent.type == SDL_QUIT)
        {
            setGameState(EXIT);
        }
        else if(gEvent.type == SDL_KEYDOWN)
        {
            setGameState(EXIT);
        }
    }

    introBG->show(screen);

    if(!render())
    {
        return 0;
    }

    return 1;
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

bool TheGame::render()
{
    return 1;
}
