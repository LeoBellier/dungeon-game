/*
 * MapCell.cpp
 *
 *  Created on: Aug 14, 2019
 *      Author: leobellier
 */

#include "MapCell.h"

MapCell::MapCell() {

	id = '0';

}

bool MapCell::isBlocked()
{
	if (id=='1'){
		return true;
	}
	else{
		return false;
	}

}
