#pragma once
#include <SDL.h>
#include "Globals.h"


class FileIO 
{
private:

public:

	FileIO();
	FileIO *fileIO;


	void load_files(Globals gl);
	void load_graphics(Globals gl);

};