#include "theGame.h"

TheGame::TheGame()
{
    setGameState(0);
    introBG = new Background("poop.png");
}

TheGame::~TheGame()
{
    delete introBG;
    delete screen;
}

//***************************************************
bool TheGame::initialize()
{
    SDL_Init(SDL_INIT_EVERYTHING);

    screen = SDL_SetVideoMode(800, 600, 32, SDL_SWSURFACE);

    SDL_WM_SetCaption("POOP", "POOP");

    introBG->load("poop.png");

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
    if(SDL_Flip(screen) == -1)
    {
        return 0;
    }

    return 1;
}
