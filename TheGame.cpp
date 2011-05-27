#include "TheGame.h"
#include "Timer.h"

TheGame::TheGame() : screen(0)
{
    setGameState(0);
    screenHeight_ = 500;
    screenWidth_ = 800;
    introBG = new Sprite();
}

TheGame::~TheGame()
{
    delete introBG;
}

//***************************************************
bool TheGame::initialize()
{
    SDL_Init(SDL_INIT_EVERYTHING);

    screen = SDL_SetVideoMode(screenWidth_, screenHeight_, 32, SDL_SWSURFACE);

    SDL_WM_SetCaption("My Game", "My Game");

    introBG->load("images/Final/Intro.png");
    introBG->setYPos(-(introBG->h() - screenHeight_));
    introBG->setXPos(5);

    if(screen == 0)
    {
        return 0;
    }

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
    Timer fps;

    int frame = 200;
    bool doingIntro = 1,
        intro = 1;

    fps.start();

    while(intro)
    {
        while(SDL_PollEvent(&gEvent))
        {
            if(gEvent.type == SDL_QUIT)
            {
                intro = 0;
                setGameState(EXIT);
            }
            else if(!doingIntro)
            {
                if(gEvent.type == SDL_KEYDOWN)
                {
                    intro = 0;
                    buildLevelI();
                    setGameState(LEVEL_I);
                }
            }
        }

        if(doingIntro)
        {
            introBG->setYPos(introBG->getYPos() + 2);
        }

        if(introBG->getYPos() >= 0)
        {
            introBG->setYPos(0);
            doingIntro = 0;
        }

        if( fps.get_ticks() < 1000 / frame )
        {
            SDL_Delay( ( 1000 / frame ) - fps.get_ticks() );
        }

        introBG->show(screen);

        if(!render())
        {
            return 0;
        }
    }

    return 1;
}

void TheGame::doSelectSave()
{

}

bool TheGame::doLevelI()
{
    Timer fps;

    int frame = 100;

    fps.start();

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

    levels_[0]->setXPos(levels_[0]->getXPos() - 2);

    if(levels_[0]->getXPos() <= -(levels_[0]->getLevelWidth() - screenWidth_))
    {
        levels_[0]->setXPos(0);
    }

    if( fps.get_ticks() < 1000 / frame )
    {
        SDL_Delay( ( 1000 / frame ) - fps.get_ticks() );
    }

    levels_[0]->show(screen);

    if(!render())
    {
        return 0;
    }

    return 1;
}

void TheGame::doMenu()
{

}

void TheGame::doExit()
{
    SDL_Quit();
}

bool TheGame::render()
{
    if(SDL_Flip(screen) == -1)
    {
        return 0;
    }

    return 1;
}


void TheGame::buildLevelI()
{
    Level* levelI = new Level("images/Final/level_1.png", screenHeight_, screenWidth_, "Level I");
    levels_.push_back(levelI);

}
