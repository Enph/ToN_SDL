#include "LTimer.h"

void LTimer::start_timer()
{
	start = SDL_GetTicks();

	//Set pause ticks to 0
	pTicks = 0;

	//unpause the timer
	timerPaused = false;
}

int LTimer::get_ticks()
{
	if (timerPaused == true) //if timer is paused
	{
		return pTicks; //return the paused ticks
	}
	return SDL_GetTicks() - start; //return the current time minus start time
}

void LTimer::pause_timer()
{
	pTicks = SDL_GetTicks() - start;

	timerPaused = true;
}

void LTimer::resume_timer()
{
	if (timerPaused == true)
	{
		start = SDL_GetTicks() - pTicks;

		pTicks = 0;

		timerPaused = false;
	}
}

bool LTimer::paused()
{
	return timerPaused;
}

