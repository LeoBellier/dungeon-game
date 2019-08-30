/*
 * Player.h
 *
 *  Created on: Aug 14, 2019
 *      Author: leobellier
 */

#ifndef PLAYER_H_
#define PLAYER_H_

class Player {
public:
	Player();
	void CallInput();
	void ResetToSafePosition();
	int GetPositionX();
	int GetPositionY();

protected:
	int x, y;

	int lastX, lastY;

private:
};

#endif // PLAYER_H
