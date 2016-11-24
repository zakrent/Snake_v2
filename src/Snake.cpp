#include "Snake.h"
//#include <iostream>

Snake::Snake(){1 == 1;}

Snake::Snake(int x, int y) { this->x = x; this->y = y; this->direction = 0; this->lenght = 1; }

void Snake::draw(Map &scene) { scene.tile[this->x][this->y].setType(TILE_SNAKE, this->lenght); scene.tile[this->x][this->y].draw(this->x, this->y); }

void Snake::changeDirection(int) { this->direction = direction; }

void Snake::updateDirection(){
	int key = getch();
	//std::cout << key;
	switch (key)
	{
	case 115: // S
		if (direction != 2) { this->direction = 0; }
		break;
	case 119: // W
		if (direction != 0) { this->direction = 2; }
		break;
	case 100: // D
		if (direction != 3) { this->direction = 1; }
		break;
	case 97: // A
		if (direction != 1) { this->direction = 3; }
		break;
	default:
		break;
	}
}

bool Snake::update(Map &scene, Food &food){
	switch (this->direction)
	{
	case 0:
		if (scene.tile[this->x][this->y + 1].type == TILE_FOOD) { this->lenght++;}
		if (!scene.tile[this->x][this->y + 1].isSolid()) { this->y++; return true; }
		else { return false; }
		break;
	case 1:
		if (scene.tile[this->x + 1][this->y].type == TILE_FOOD) { this->lenght++;}
		if (!scene.tile[this->x + 1][this->y].isSolid()) { this->x++; return true; }
		else { return false; }
		break;
	case 2:
		if (scene.tile[this->x][this->y - 1].type == TILE_FOOD) { this->lenght++;}
		if (!scene.tile[this->x][this->y - 1].isSolid()) { this->y--; return true; } 
		else { return false; }
		break;
	case 3:
		if (scene.tile[this->x - 1][this->y].type == TILE_FOOD) { this->lenght++;}
		if (!scene.tile[this->x - 1][this->y].isSolid()) { this->x--; return true; }
		else { return false; }
		break;
	}
}


//#2#
//3+1
//#0#