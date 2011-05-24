#include "Background.h"
#include "Sprite.h"

Background::Background() : backgroundImage(0)
{

}

//*********************************************************
Background::Background(const std::string& fileName)
{
    backgroundImage = new Sprite();
}

//*********************************************************
Background::~Background()
{
    delete backgroundImage;
}

//*********************************************************
void Background::show(SDL_Surface* screen)
{
    backgroundImage->show(screen);
}

void Background::load(const std::string& fileName)
{
    backgroundImage->load(fileName);
}
