#pragma once
#include "Program.cpp"

class Snake {
private:
	int x, y, direction, lenght;
public:
	Snake(int x, int y);
	void draw(Map &scene);
	void changeDirection(int);
	void addLenght(int);
	void update(Map &scenc);
};