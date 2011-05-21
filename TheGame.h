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

        void doIntro();
        void doSelectSave();
        void doLevelI();
        void doMenu();
        void doExit();

    private:
        std::vector<Level*> levels_;
        std::vector<Toon*> toons_;

        int gameState_;
};

//*****************************************************
int TheGame::getGameState()
{
    return gameState_;
}

#endif // THEGAME_H
