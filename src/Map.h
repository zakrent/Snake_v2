#pragma once
#include "Tile.h"
#define MAP_WIDTH 25
#define MAP_HEIGHT 50


class Map {
public:
	Tile tile[MAP_WIDTH][MAP_HEIGHT];
	Map();
	void draw();
	void update();
};