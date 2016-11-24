#pragma once
#include "Map.h"
#include <random>

class Food {
private:
	int x, y;
public:
	Food();
	void check(Map &scene);
};