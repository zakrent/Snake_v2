#pragma once
#include "Map.h"

class Snake {
private:
	int x, y, direction, lenght;
public:
	Snake();
	Snake(int, int );

	void draw(Map &scene);
	void changeDirection(int);
	void addLenght(int);
	bool update(Map &scenc);
};