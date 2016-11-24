#pragma once
#include "Map.h"
#include "Food.h"

class Snake {
private:
	int x, y, direction;
public:
	int lenght;
	Snake();
	Snake(int, int );

	void draw(Map &scene);
	void changeDirection(int);
	void updateDirection();
	bool update(Map &scenc, Food &food);
};