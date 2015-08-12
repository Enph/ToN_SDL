#pragma once
#include "LHeaders.h"

globals loadGlobal;


void controller::intro()
{
	bool endIntro = false;

	LTimer timer; // a limit timer

	if (loadGlobal.gQuit == false)
	{
		SDL_BlitSurface(loadGlobal.introBG, NULL, loadGlobal.gScreenSurface, NULL);
		SDL_UpdateWindowSurface(loadGlobal.gWindow);
	}

	timer.start_timer();

	while ((endIntro == false) && (loadGlobal.gQuit == false))
	{
		if (SDL_PollEvent(&loadGlobal.event))
		{
			if (loadGlobal.event.key.keysym.sym == SDLK_ESCAPE)
			{
				loadGlobal.gQuit = true;
			}
			endIntro = true;
		}
		if (loadGlobal.event.type == SDL_QUIT)
		{
			loadGlobal.gQuit = true;
		}
		//if time is up
		if (timer.get_ticks() > 2000)
		{
			//end the intro
			endIntro = true;
		}
	}
}

void controller::title()
{
	bool endTitle = false;

	//if the user hasn't quit
	if (loadGlobal.gQuit == false)
	{
		SDL_BlitSurface(loadGlobal.titleBG, NULL, loadGlobal.gScreenSurface, NULL);
		SDL_UpdateWindowSurface(loadGlobal.gWindow);
	}

	//while the title screen is going
	while ((endTitle == false) && (loadGlobal.gQuit == false))
	{
		//if there's an event on queue
		if (SDL_PollEvent(&loadGlobal.event))
		{
			//if a key is pressed
			if (loadGlobal.event.type == SDL_KEYDOWN)
			{
				//if escape is pressed
				if (loadGlobal.event.key.keysym.sym == SDLK_ESCAPE)
				{
					//quit
					loadGlobal.gQuit = true;
				}
				//if return was pressed
				else if (loadGlobal.event.key.keysym.sym == SDLK_RETURN)
				{
					//end the title loop
					endTitle = true;
				}
			}
			//if the user Xed out
			else if (loadGlobal.event.type == SDL_QUIT)
			{
				//quit
				loadGlobal.gQuit = true;
			}
		}
	}
}

