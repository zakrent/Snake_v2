#pragma once
#include "curses.h"
#define TILE_VOID 0 //Tile IDs
#define TILE_WALL 1

class Tile {
private:
	
public:
	int type, life;//
	Tile(int = 0, int = 0xFFFFF);
	void setType(int, int = 0xFFFFF);
	void calcLife(int, int);
	void draw(int, int);
};