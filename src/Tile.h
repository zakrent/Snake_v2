#pragma once
#include <curses.h>
#define TILE_VOID 0 //Tile IDs
#define TILE_WALL 1
#define TILE_SNAKE 2
#define TILE_FOOD 3

class Tile {
public:
	int type, life;//
	Tile(int = 0, int = 0xFFFFF);
	void setType(int, int = 0xFFFFF);
	void calcLife(int, int);
	void draw(int, int);
	bool isSolid();
};
