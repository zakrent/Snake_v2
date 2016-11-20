#include "Program.h"

Program::Program() {
	isTurnedOn = true; initscr(); 
	start_color(); 
	curs_set(0); 
}

Program::~Program() { endwin(); }

void Program::mainLoop() {
	scene.draw();
	while (this->isTurnedOn) {
		time = clock();
		time -= prevTime;
		if (time > 1*CLOCKS_PER_SEC) {
			//player.update(scene);
			scene.update();
			//player.draw(scene);
			refresh();
			prevTime = clock();
		}
	}
}