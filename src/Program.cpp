#include "Program.h"
#include <iostream>

Program::Program() { this->isTurnedOn = true; initscr(); start_color(); curs_set(0);}

Program::~Program() { endwin(); }

void Program::mainLoop() {
	scene.draw();
	while (this->isTurnedOn) {
		time = clock();
		time -= prevTime;
		if (time > 1*CLOCKS_PER_SEC) {
			scene.update();
			refresh();
			prevTime = clock();
			std::cout << scene.tile[5][5].life << std::endl;
		}
	}
}