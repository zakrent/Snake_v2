#include "Program.h"
#include <windows.h> //

Program::Program() { isTurnedOn = true; }

void Program::mainLoop(){
	scene.tile[5][5].setType(TILE_WALL, 100); // 
	while (isTurnedOn){
		scene.draw();
		Sleep(10); //
		system("cls"); //DEBUGGING PLACEHOLDERS DON'T WORRY
		scene.update();
	}
}

