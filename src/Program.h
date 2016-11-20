#pragma once
#include <time.h>
#include <iostream>//
#include "Tile.h"
#include "Map.h"
#include "Snake.h"

class Program {

private:
	Map scene;
	bool isTurnedOn;
	clock_t prevTime;
	clock_t time;
	Snake player;
public:
	Program();
	~Program();
	void mainLoop();
};