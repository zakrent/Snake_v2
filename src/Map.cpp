#include "Map.h"

Map::Map(){
	bool mapReady = false;
	int iX = 0, iY = 0; //iteration X and Y
	while (!mapReady){
		if (iX == MAP_WIDTH) { iX = 0; iY++; }
		if (iY == MAP_HEIGHT) { mapReady = true; break; }
		if (iX == 0 || iX == MAP_WIDTH - 1 || iY == 0 || iY == MAP_HEIGHT - 1) { tile[iX][iY].setType(TILE_WALL, 0xFFFFF); } //setting map borders to WALL type
		else { tile[iX][iY].setType(TILE_VOID); }
		iX++;
	}
}

void Map::draw(){
	bool mapDisplayed = false;
	int iX = 0, iY = 0; //iteration X and Y
	while (!mapDisplayed) {
		if (iX == MAP_WIDTH) { iX = 0; iY++; }
		if (iY == MAP_HEIGHT) { mapDisplayed = true; break; }
		tile[iX][iY].draw(iX,iY);
		iX++;
	}
}

void Map::update()
{
	bool mapUpdated = false;
	int iX = 0, iY = 0; //iteration X and Y
	while (!mapUpdated) {
		if (iX == MAP_WIDTH) { iX = 0; iY++; }
		if (iY == MAP_HEIGHT) { mapUpdated = true; break; }
		tile[iX][iY].calcLife(iX, iY);
		iX++;
	}
}
