#pragma once
#include "FileIO.h"

FileIO::FileIO(void){}

void FileIO::load_files(Globals gl)
{
	//load_graphics(gl);
}

void FileIO::load_graphics(Globals gl)
{
	gl.setIntroBG(SDL_LoadBMP("Resources\Bliss.bmp"));

	
}