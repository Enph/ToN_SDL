#pragma once
#include "Globals.h"



Globals::Globals(void) { }
Globals *global;

Globals Globals::getGlobalObj() { return *global; }

bool Globals::getgQuit() { return Globals::gQuit; }
SDL_Window* Globals::getgWindow() { return Globals::gWindow; }
SDL_Event Globals::getEvent() { return Globals::event; }
SDL_Surface* Globals::getgScreenSurface() { return Globals::gScreenSurface; }
SDL_Surface* Globals::getgPNGSurface() { return Globals::gPNGSurface; }
SDL_Surface* Globals::getIntroBG() { return Globals::introBG; }
SDL_Surface* Globals::getTitleBG() { return Globals::titleBG; }


void Globals::setgQuit(bool set)
{
	Globals::gQuit = set;
}
void Globals::setgWindow(SDL_Window* window)
{
	Globals::gWindow = window;
}
void Globals::setEvent(SDL_Event setEvent)
{
	Globals::event = setEvent;
}

void Globals::setIntroBG(SDL_Surface* surface)
{
	Globals::introBG = surface;
}

void Globals::setTitleBG(SDL_Surface* surface)
{
	Globals::titleBG = surface;
}


void Globals::setgScreenSurface(SDL_Surface* surface)
{
	Globals::gScreenSurface = surface;
}

void Globals::setgPNGSurface(SDL_Surface* surface)
{
	Globals::gPNGSurface = surface;
}