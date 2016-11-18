#include "Program.h"
#include <windows.h> //

Program::Program() { isTurnedOn = true; }

void Program::mainLoop(){
	while (isTurnedOn){
		scene.draw();
		Sleep(10); //
		system("cls"); //DEBUGGING PLACEHOLDERS DON'T WORRY
		scene.update();
	}
}

