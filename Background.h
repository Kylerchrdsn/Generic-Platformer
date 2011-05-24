#ifndef BACKGROUND_H
#define BACKGROUND_H

#include <string>

class Sprite;
class SDL_Surface;

class Background
{
    public:
        Background();
        Background(const std::string& fileName);
        ~Background();

        void show(SDL_Surface* screen);
        void load(const std::string& fileName);

    private:
        Sprite* backgroundImage;
};

#endif // BACKGROUND_H
