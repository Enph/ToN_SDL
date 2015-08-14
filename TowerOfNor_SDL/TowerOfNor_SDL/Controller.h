#pragma once
#include <stdio.h>
#include <string>
#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include "LTimer.h"
#include "Globals.h"
#include "LUtils.h"
#include "FileIO.h"


class Controller
{
private:
	LTimer timer;
	Globals loadGlobal;
	FileIO loadFileIO;

public:
	
	Globals Controller::getGlobalObj();
	FileIO Controller::getFileIO();


	Globals Controller::setGlobalObj(Globals gl);
	
	void intro();
	void title();
	void playGame();
};