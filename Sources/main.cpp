#include <iostream>
#include "../headers/player.h"

using namespace std;

int main (){

    bool isAlive = true;
    Player Hero;
    Hero.CallInput();

    while (isAlive)
    {
        Hero.CallInput();
    }
    
    return 0;
}