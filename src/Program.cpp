#include "Program.h"
#include <iostream>

Program::Program() { this->isTurnedOn = true; }

void Program::mainLoop(){
	scene.tile[5][5].setType(TILE_WALL, 10000); 
	initscr();
	start_color();
	curs_set(0);
	scene.draw();
	while (this->isTurnedOn){
		refresh();
		scene.update();
	}
	endwin();
}


