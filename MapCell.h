/*
 * MapCell.h
 *
 *  Created on: Aug 14, 2019
 *      Author: leobellier
 */

#ifndef MAPCELL_H_
#define MAPCELL_H_

class MapCell {
public:
	MapCell();

	char id;

	bool isBlocked();
};

#endif /* MAPCELL_H_ */
