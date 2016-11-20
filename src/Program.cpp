#include "Program.h"
#include <iostream>

Program::Program() { this->isTurnedOn = true; initscr(); start_color(); curs_set(0);}

Program::~Program() { endwin(); }

void Program::mainLoop() {
	scene.tile[5][5].setType(TILE_WALL, 3); //
	scene.draw();
	while (this->isTurnedOn) {
		time = clock();
		time -= prevTime;
		if (time > 1*CLOCKS_PER_SEC) {
			refresh();
			scene.update();
			prevTime = clock();
		}
	}
}