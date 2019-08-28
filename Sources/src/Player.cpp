#include "../../headers/player.h"
#include <iostream>

using namespace std;
Player::Player(){

}

void Player::CallInput()
{
    char UserInput = ' ';
    cin >> UserInput;

    cout << "call it input";

    switch(UserInput){
        case 'w':
            cout << "Player go up" << endl;
            break;
        case 's':
            cout << "Player go down" << endl;
            break;
        case 'a':
            cout << "Player go left" << endl;
            break;
        case 'd':
            cout << "Player go right" << endl;
            break;
    }
}