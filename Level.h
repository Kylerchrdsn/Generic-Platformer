#ifndef LEVEL_H
#define LEVEL_H

#include "Toon.h"
#include "Hazzard.h"
#include "Background.h"
#include <vector>
#include <string>

class Level
{
    public:
        Level();
        ~Level();

        void addEnemy(int type, int number);
        inline void setName(const std::string& name);
        inline std::string getName() const;

    private:
        std::vector<Toon*> toons_;
        std::vector<Hazzard*> lookout_;
        Background* BG;

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

#endif // LEVEL_H
