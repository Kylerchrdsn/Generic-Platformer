#ifndef LEVEL_H
#define LEVEL_H

#include "Toon.h"
#include "Hazzard.h"
#include "Sprite.h"
#include "Platform.h"
#include <vector>
#include <string>

class Level
{
    public:
        Level(const int screenHeight = 0, const int screenWidth = 0, const std::string& name = "Blank");
        Level(const std::string& fileName, const int screenHeight = 0, const int screenWidth = 0, const std::string& name = "Blank");
        ~Level();

        inline void setName(const std::string& name);
        inline std::string getName() const;
        inline int getLevelHeight() const;
        inline int getLevelWidth() const;
        inline int getXPos();
        inline int getYPos();

        void addEnemy(int type, int number);
        void addPlat(Platform* plat);
        void addToon(Toon* tempToon);
        void setLevelHeight(int height);
        void setLevelWidth(int width);
        void setXPos(const int x);
        void setYPos(const int y);
        void setPlatX(int plat, int x);
        void setPlatY(int plat, int y);
        void show(SDL_Surface* screen);

    private:
        std::vector<Toon*> toons_;
        std::vector<Hazzard*> lookout_;
        std::vector<Platform*> path_;
        Sprite* BG;

        int LEVEL_HEIGHT,
            LEVEL_WIDTH;

        SDL_Rect camera_;

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

int Level::getXPos()
{
    return BG->getXPos();
}

int Level::getYPos()
{
    return BG->getYPos();
}


#endif // LEVEL_H
