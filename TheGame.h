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

    private:
        std::vector<Level*> levels_;
        std::vector<Toon*> toons_;
};

#endif // THEGAME_H
