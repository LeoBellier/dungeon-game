/*
 * GameMap.h
 *
 *  Created on: Aug 14, 2019
 *      Author: leobellier
 */

#ifndef GAMEMAP_H_
#define GAMEMAP_H_

#include "MapCell.h"

class GameMap {
public:
	GameMap();

	MapCell* PlayerCell;
	MapCell cells[15][10];

	void drawIntro();
	void Draw();

	bool SetPlayerCell(int PlayerX, int PlayerY);
protected:
	void LoadMapFromFile();
};

#endif /* GAMEMAP_H_ */
