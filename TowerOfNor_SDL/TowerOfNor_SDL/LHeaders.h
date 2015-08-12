#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include <string>
#include <iostream>


#include "constants.cpp"
#include "LTimer.h"


class globals 
{
private:

public:
	//Globals
	bool gQuit = false;
	SDL_Window *gWindow = NULL;
	SDL_Event event;//The event structure


	SDL_Surface* gScreenSurface = NULL;
	SDL_Surface* gPNGSurface = NULL;
	SDL_Surface* introBG = NULL;
	SDL_Surface* titleBG = NULL;

};

class LUtils
{
private:
public:
	bool loadPNG(std::string IMGfilePath);
	SDL_Surface* loadSurface(std::string path);
};


class fileIO
{
private:
public:
	void load_files();
	void load_graphics();
};

class controller
{
private:
public:
	void intro();
	void title();
};
