#pragma once
#include "Tile.h"
#define MAP_WIDTH 50
#define MAP_HEIGHT 25


class Map {
public:
	Tile tile[MAP_WIDTH][MAP_HEIGHT];
	Map();
	void draw();
	void update();
};