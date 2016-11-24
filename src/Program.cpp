#include "Program.h"

Program::Program() { 
	isTurnedOn = true; 
	initscr(); 
	start_color(); 
	curs_set(0); 
	noecho();
	player = Snake(10, 8); 
	timeout(100);
}
Program::~Program() { endwin(); }

void Program::mainLoop() {
	int x;
	scene.draw();
	while (this->isTurnedOn) {
		time = clock();
		time -= prevTime;
		if (time > 0.3*CLOCKS_PER_SEC) {
			if (!player.update(scene, food)) { isTurnedOn = false; }
			scene.update();
			player.draw(scene);
			food.check(scene);
			refresh();
			prevTime = clock();
		}
		else {
			player.updateDirection();
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

