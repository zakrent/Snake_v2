#include "Tile.h"

Tile::Tile(int type, int life) { this->setType(type, life); }

void Tile::setType(int type, int life){
	this->type = type;
	this->life = life;
}

void Tile::calcLife(int x, int y){ //subtracts life every iteration and if life == 0 changes it to void, if life == 0xFFFFF it's indestructible
	if (this->life == 0xFFFFF) { return; }
	if (this->life == 0) { this->setType(TILE_VOID); this->draw(x, y);  return; }
	else { this->life--; }
}

void Tile::draw(int x,int y){ //Displays 
	init_pair(1, COLOR_WHITE, COLOR_BLACK);
	init_pair(2, COLOR_GREEN, COLOR_BLACK);
	init_pair(3, COLOR_BLUE, COLOR_BLACK);
	switch (this->type)
	{
	case TILE_VOID:
		attron(COLOR_PAIR(1));
		mvprintw(y, x, "-");
		break;
	case TILE_WALL:
		attron(COLOR_PAIR(2));
		mvprintw(y, x, "#");
		break;
	case TILE_SNAKE:
		attron(COLOR_PAIR(3));
		mvprintw(y, x, "O");
		break;
	case TILE_FOOD:
		attron(COLOR_PAIR(2));
		mvprintw(y, x, "G");
		break;
	}
}

bool Tile::isSolid()
{
	switch (this->type)
	{
	case TILE_VOID:
		return false;
		break;
	case TILE_WALL:
		return true;
		break;
	case TILE_SNAKE:
		return false;
		break;
	case TILE_FOOD:
		return false;
		break;
	}
	return false;
}
