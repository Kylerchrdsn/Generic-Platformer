#include "Background.h"

Background::Background()
{
    backgroundImage = 0;
}

Background::~Background()
{
    delete backgroundImage;
}

void Background::show(SDL_Surface* screen)
{
    backgroundImage->show(screen);
}
