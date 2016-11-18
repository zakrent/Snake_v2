#pragma once
#include "Map.h"

class Program {

private:
	Map scene;
	bool isTurnedOn;
public:
	Program();
	void mainLoop();
};