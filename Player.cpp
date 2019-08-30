/*
 * Player.cpp
 *
 *  Created on: Aug 14, 2019
 *      Author: leobellier
 */

#include "Player.h"
#include <iostream>

using namespace std;
Player::Player(){
	x = 1;
	y = 1;
	lastX=1;
	lastY =1;

}

void Player::CallInput()
{
    char UserInput = ' ';
    cin >> UserInput;
    switch(UserInput){
        case 'w':
        	lastY = y;
        	y=y-1;
            break;
        case 's':
        	lastY = y;
        	y=y+1;
            break;
        case 'a':
        	lastX = x;
        	x=x-1;
            break;
        case 'd':
        	lastX = x;
        	x=x+1;
            break;
    }
}

int Player::GetPositionX(){
	return x;
}
int Player::GetPositionY(){
	return y;
}

void Player::ResetToSafePosition(){
	x = lastX;
	y = lastY;
}
