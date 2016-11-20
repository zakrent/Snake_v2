#pragma once
#include <time.h>
#include "Map.h"

class Program {

private:
	Map scene;
	bool isTurnedOn;
	clock_t prevTime;
	clock_t time;
public:
	Program();
	~Program();
	void mainLoop();
};