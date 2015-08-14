#pragma once
#include "LUtils.h"


LUtils::LUtils(void) {}
LUtils loadUtil;

SDL_Surface* loadSurface(std::string path);


LUtils LUtils::getUtilsObj()
{
	return *loadUtil;
}



SDL_Surface* LUtils::loadSurface(std::string path,SDL_Surface *screenSurface)
{
	//The final optimized image
	SDL_Surface* optimizedSurface = NULL;

	//Load image at specified path
	SDL_Surface* loadedSurface = IMG_Load(path.c_str());
	if (loadedSurface == NULL)
	{
		printf("Unable to load image %s! SDL_image Error: %s\n", path.c_str(), IMG_GetError());
	}
	else
	{
		//Convert surface to screen format
		optimizedSurface = SDL_ConvertSurface(loadedSurface, screenSurface->format, NULL);
		if (optimizedSurface == NULL)
		{
			printf("Unable to optimize image %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}

		//Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}

	return optimizedSurface;
}

void LUtils::update_screen(SDL_Window *gWindow)
{
	SDL_UpdateWindowSurface(gWindow);
}





