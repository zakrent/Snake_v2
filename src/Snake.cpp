#include "Snake.h"
#include <iostream>//

Snake::Snake(){1 == 1;}

Snake::Snake(int x, int y) { this->x = x; this->y = y; this->direction = 0; this->lenght = 1; }

void Snake::draw(Map &scene) { scene.tile[this->x][this->y].setType(TILE_SNAKE, this->lenght); scene.tile[this->x][this->y].draw(this->x, this->y); }

void Snake::changeDirection(int) { this->direction = direction; }

void Snake::addLenght(int) { this->lenght++; }

void Snake::update(Map &scene){
	switch (this->direction)
	{
	case 0:
		if (!scene.tile[this->x][this->y + 1].isSolid()) { this->y++; }
		break;
	case 1:
		if (!scene.tile[this->x + 1][this->y].isSolid()) { this->x++; }
		break;
	case 2:
		if (!scene.tile[this->x][this->y - 1].isSolid()) { this->y--; }
		break;
	case 3:
		if (!scene.tile[this->x + 1][this->y].isSolid()) { this->x--; }
		break;
	}
}


//#0#
//3+1
//#2#