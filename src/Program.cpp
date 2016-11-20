#include "Program.h"

Program::Program() { isTurnedOn = true; initscr(); start_color(); curs_set(0); player = Snake(30, 1); }
Program::~Program() { endwin(); }

void Program::mainLoop() {
	int x;
	scene.draw();
	while (this->isTurnedOn) {
		time = clock();
		time -= prevTime;
		if (time > 0.3*CLOCKS_PER_SEC) {
			if (!player.update(scene)) { isTurnedOn = false; }
			scene.update();
			player.draw(scene);
			refresh();
			prevTime = clock();
		}
	}
}

void Program::endGame(){
	clear();
	attron(COLOR_PAIR(1));
	printw("You've lost!");
	refresh();
	time = clock() + 5 * CLOCKS_PER_SEC;
	while(clock()<time){}
}

