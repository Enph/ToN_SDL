#pragma once
#include "LHeaders.h"

LUtils loadUtil;
globals global;

void fileIO::load_files()
{
	load_graphics();
}

void fileIO::load_graphics()
{

	//Load the backgrounds
	global.introBG = loadUtil.loadSurface("Resources\introBG.png");
	global.titleBG = loadUtil.loadSurface("Resources\background_test.png");
}
