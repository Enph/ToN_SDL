#pragma once
#include "Controller.h"


Globals Controller::getGlobalObj()
{
	return loadGlobal;
}

FileIO Controller::getFileIO()
{
	return loadFileIO;
}


Globals Controller::setGlobalObj(Globals gl)
{
	return Controller::getGlobalObj() = gl;
}


void Controller::intro()
{
	bool endIntro = false;

	LTimer timer; // a limit timer

	if (loadGlobal.getgQuit() == false)
	{
		SDL_BlitSurface(loadGlobal.getIntroBG(), NULL, loadGlobal.getgScreenSurface(), NULL);
		SDL_UpdateWindowSurface(loadGlobal.getgWindow());
	}

	timer.start_timer();

	while ((endIntro == false) && (loadGlobal.getgQuit() == false))
	{
		if (SDL_PollEvent(&loadGlobal.getEvent()))
		{
			if (loadGlobal.getEvent().key.keysym.sym == SDLK_ESCAPE)
			{
				loadGlobal.setgQuit(true);
			}
			endIntro = true;
		}
		if (loadGlobal.getEvent().type == SDL_QUIT)
		{
			loadGlobal.setgQuit(true);
		}
		//if time is up
		if (timer.get_ticks() > 2000)
		{
			//end the intro
			endIntro = true;
		}
	}
}



void Controller::title()
{
	bool endTitle = false;

	//if the user hasn't quit
	if (loadGlobal.getgQuit() == false)
	{
		SDL_BlitSurface(loadGlobal.getTitleBG(), NULL, loadGlobal.getgScreenSurface(), NULL);
		SDL_UpdateWindowSurface(loadGlobal.getgWindow());
	}

	//while the title screen is going
	while ((endTitle == false) && (loadGlobal.getgQuit() == false))
	{
		//if there's an event on queue
		if (SDL_PollEvent(&loadGlobal.getEvent()))
		{
			//if a key is pressed
			if (loadGlobal.getEvent().type == SDL_KEYDOWN)
			{
				//if escape is pressed
				if (loadGlobal.getEvent().key.keysym.sym == SDLK_ESCAPE)
				{
					//quit
					loadGlobal.setgQuit(true);
				}
				//if return was pressed
				else if (loadGlobal.getEvent().key.keysym.sym == SDLK_RETURN)
				{
					//end the title loop
					endTitle = true;
				}
			}
			//if the user Xed out
			else if (loadGlobal.getEvent().type == SDL_QUIT)
			{
				//quit
				loadGlobal.setgQuit(true);
			}
		}
	}
}

void Controller::playGame()
{

}

