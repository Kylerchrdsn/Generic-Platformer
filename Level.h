#ifndef LEVEL_H
#define LEVEL_H

#include "Toon.h"
#include "Hazzard.h"
#include "Sprite.h"
#include <vector>
#include <string>

class Level
{
    public:
        Level(const int screenHeight = 0, const int screenWidth = 0, const std::string& name = "Blank");
        ~Level();

        inline void setName(const std::string& name);
        inline std::string getName() const;
        inline int getLevelHeight() const;
        inline int getLevelWidth() const;

        void addEnemy(int type, int number);
        void setLevelHeight(int height);
        void setLevelWidth(int width);

    private:
        std::vector<Toon*> toons_;
        std::vector<Hazzard*> lookout_;
        Sprite* BG;

        int LEVEL_HEIGHT,
            LEVEL_WIDTH;

        SDL_Rect camera;

        std::string name_;
};

//**********************************************************
void Level::setName(const std::string& name)
{
    name_ = name;
}

//**********************************************************
std::string Level::getName() const
{
    return name_;
}

//**********************************************************
int Level::getLevelHeight() const
{
    return LEVEL_HEIGHT;
}

//**********************************************************
int Level::getLevelWidth() const
{
    return LEVEL_WIDTH;
}

#endif // LEVEL_H
