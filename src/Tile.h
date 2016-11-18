#pragma once
#include <iostream> //PLACEHOLDER REMEMBER TO REMOVE
#define TILE_VOID 0 //Tile ids
#define TILE_WALL 1

class Tile {
private:
	int type, life;
public:
	Tile(int = 0, int = 0xFF);
	void setType(int, int = 0xFF);
	void calcLife();
	void draw();
};