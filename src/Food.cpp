#include "Food.h"

Food::Food(){
	this->x = 14;
	this->y = 8;
}

void Food::check(Map &scene){
	std::random_device rd;
	std::mt19937 rng(rd());   
	std::uniform_int_distribution<int> hei(1, MAP_HEIGHT - 2);
	std::uniform_int_distribution<int> wid(1, MAP_WIDTH - 2);
	bool k = scene.tile[this->x][this->y].type == TILE_FOOD;
	if (scene.tile[this->x][this->y].type == TILE_VOID) {
		this->x = wid(rng);
		this->y = hei(rng);
		scene.tile[this->x][this->y].setType(TILE_FOOD);
		scene.tile[this->x][this->y].draw(this->x, this->y);
	}
}
