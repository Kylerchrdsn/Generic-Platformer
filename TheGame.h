#ifndef THEGAME_H
#define THEGAME_H

#include "SDL.h"
#include <vector>
#include "Level.h"
#include "Toon.h"


class TheGame
{
    public:
        TheGame();
        ~TheGame();

        bool initialize();

        inline int getGameState();
        void setGameState(int gameState);

        bool doIntro();
        void doSelectSave();
        void doLevelI();
        void doMenu();
        void doExit();

        bool render();

    private:
        std::vector<Level*> levels_;
        std::vector<Toon*> toons_;

        int gameState_;

        SDL_Event gEvent;

        SDL_Surface* screen;

        Background* introBG;

        enum gameStates {INTRO, SELECT_SAVE_FILE, LEVEL_I, MENU, EXIT};
};

//*****************************************************
int TheGame::getGameState()
{
    return gameState_;
}

#endif // THEGAME_H
