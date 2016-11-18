#pragma once
#include "Tile.h"
#define MAP_WIDTH 40
#define MAP_HEIGHT 20


class Map {
public:
	Tile tile[MAP_WIDTH][MAP_HEIGHT];
	Map();
	void draw();
	void update();
};