#ifndef SPRITE_H
#define SPRITE_H

#include "SDL.h"
#include "SDL_image.h"
#include <string>

class Sprite
{
    public:
        // constructors and destructor
        Sprite();
        Sprite(const int x, const int y);
        Sprite(const int x, const int y, const std::string filename);
        Sprite(const int x, const int y, const std::string filename, const int alpha);
        ~Sprite();

        // getters and setters
        inline int getXPos() const;
        inline int getYPos() const;
        void setXPos(int xPos);
        void setYPos(int yPos);
        inline SDL_Surface* getSurface() const;
        void setSurface(SDL_Surface* const surface);
        inline void setSurfaceNoFree(SDL_Surface* const surface);
        void setClip(int x, int y, int w, int h);

        // load and show
        bool load(const std::string& filename);
        bool load(const std::string& filename, int const r, int const g, int const b);
        void show(SDL_Surface* const destination) const;

        inline int w();
        inline int h();

    private:
        // image surface
        SDL_Surface* image;

        // rendering coordinates
        int xPos_,
            yPos_;

        // SDL Rect to hold the clipping information
        SDL_Rect* clip;
};

//*****************************************************
int Sprite::getXPos() const
{
	return xPos_;
}

//*****************************************************
int Sprite::getYPos() const
{
	return yPos_;
}

//*****************************************************
SDL_Surface* Sprite::getSurface() const
{
	return image;
}

//*****************************************************
void Sprite::setSurfaceNoFree(SDL_Surface* const surface)
{
	image = surface;
}

int Sprite::w()
{
    return image->w;
}

int Sprite::h()
{
    return image->h;
}

#endif // SPRITE_H
