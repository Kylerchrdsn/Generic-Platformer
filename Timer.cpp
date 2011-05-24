#include "Timer.h"
#include "SDL.h"

Timer::Timer()
{
    startTicks_ = 0;
    pausedTicks_ = 0;
    paused_ = 0;
    started_ = 0;
}

//********************************************
void Timer::start()
{
    started_ = 1;
    startTicks_ = SDL_GetTicks();
}

//*******************************************
void Timer::stop()
{

}

//*******************************************
void Timer::pause()
{

}

void Timer::unpause()
{

}


int Timer::get_ticks()
{
    return 1;
}


bool Timer::is_started()
{
    return 1;
}


bool Timer::is_paused()
{
    return 1;
}
