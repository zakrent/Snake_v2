#include "Program.h"

Program::Program() { 
	isTurnedOn = true; 
	initscr(); 
	if (has_colors) { start_color(); }
	curs_set(0); 
	resize_term(MAP_HEIGHT+1, MAP_WIDTH);
	noecho();
	player = Snake(10, 8); 
	timeout(50);
}
Program::~Program() { endwin(); }

void Program::mainLoop() {
	int x;
	scene.draw();
	while (this->isTurnedOn) {
		time = clock();
		time -= prevTime;
		if (time > 0.1*CLOCKS_PER_SEC) {
			if (!player.update(scene, food)) { isTurnedOn = false; }
			scene.update();
			player.draw(scene);
			food.check(scene);
			refresh();
			prevTime = clock();
			player.updateDirection();
			//score calc and diplay
			score = player.lenght * 100;
			attron(COLOR_PAIR(4));
			mvprintw(MAP_HEIGHT, 0, "Your score is: %d", score);
		}
	}
}

void Program::endGame(){
	clear();
	attron(COLOR_PAIR(1));
	printw("You've lost!\n");
	printw("Your score is: %d", score);
	refresh();
	time = clock() + 5 * CLOCKS_PER_SEC;
	while(clock()<time){}
}

