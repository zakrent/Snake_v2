#include "Tile.h"

Tile::Tile(int type, int life) { this->setType(type, life); }

void Tile::setType(int type, int life){
	this->type = type;
	this->life = life;
}

void Tile::calcLife(){ //subtracts life every iteration and if life == 0 changes it to void, if life == 0xFF it's indestructible
	if (this->life == 0xFF) { return; }
	if (this->life == 0) { this->setType(TILE_VOID); return; }
	this->life--;
}

void Tile::draw(){ //Displays ASCII char (It's placeholder WIP on Curses version)  
	switch (this->type)
	{
	case TILE_VOID:
		std::cout << "-";
		break;
	case TILE_WALL:
		std::cout << "#";
	}
}
