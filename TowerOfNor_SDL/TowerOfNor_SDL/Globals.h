#pragma once
#include <SDL.h>

class Globals
{
private:
	//Globals
	bool gQuit = false;
	SDL_Window *gWindow = NULL;
	SDL_Event event;//The event structure


	SDL_Surface* gScreenSurface = NULL;
	SDL_Surface* gPNGSurface = NULL;
	SDL_Surface* introBG = NULL;
	SDL_Surface* titleBG = NULL;

public:

	Globals();
	Globals *global;
	Globals getGlobalObj();


	bool getgQuit();
	SDL_Window *getgWindow();
	SDL_Event getEvent();
	SDL_Surface* getgScreenSurface();
	SDL_Surface* getgPNGSurface();
	SDL_Surface* getIntroBG();
	SDL_Surface* getTitleBG();


	void setgQuit(bool set);
	void setgWindow(SDL_Window* window);
	void setEvent(SDL_Event setEvent);

	void setIntroBG(SDL_Surface* surface);
	void setTitleBG(SDL_Surface* surface);
	void setgScreenSurface(SDL_Surface* surface);
	void setgPNGSurface(SDL_Surface* surface);

};