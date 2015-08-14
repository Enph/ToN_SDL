#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <string>

class LUtils
{
private:
public:
	LUtils();
	LUtils *loadUtil;
	LUtils getUtilsObj();



	SDL_Surface* loadSurface(std::string path,SDL_Surface *screenSurface);
	void update_screen(SDL_Window *gWindow);
};