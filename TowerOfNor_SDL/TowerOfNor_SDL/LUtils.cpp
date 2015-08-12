#pragma once
#include "LHeaders.h"

globals globalVAR;

SDL_Surface* loadSurface(std::string path);


bool LUtils::loadPNG(std::string IMGfilePath) //confirmation that a PNG file got loaded properly on gPNGSurface
{
	bool success = true;
	globalVAR.gPNGSurface = loadSurface(IMGfilePath);
	if (globalVAR.gPNGSurface == NULL)
	{
		printf("Failed to load PNG img \n");
		success = false;
	}
	return success;
}

SDL_Surface* LUtils::loadSurface(std::string path)
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
		optimizedSurface = SDL_ConvertSurface(loadedSurface, globalVAR.gScreenSurface->format, NULL);
		if (optimizedSurface == NULL)
		{
			printf("Unable to optimize image %s! SDL Error: %s\n", path.c_str(), SDL_GetError());
		}

		//Get rid of old loaded surface
		SDL_FreeSurface(loadedSurface);
	}

	return optimizedSurface;
}





