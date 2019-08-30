#include <iostream>
#include "Player.h"
#include "MapCell.h"
#include "GameMap.h"

using namespace std;

int main (){

    bool isAlive = true;
    GameMap Map;
    Player Hero;

    Map.drawIntro();
	Map.Draw();

    while (isAlive)
    {
        Hero.CallInput();

    	if (Map.SetPlayerCell(Hero.GetPositionX(), Hero.GetPositionY())){
    		Map.Draw();
    	}else {
    		Hero.ResetToSafePosition();
    		Map.Draw();
    	}


    }

    return 0;
}
