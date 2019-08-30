/*
 * GameMap.cpp
 *
 *  Created on: Aug 14, 2019
 *      Author: leobellier
 */

#include "GameMap.h"
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

GameMap::GameMap() {
	PlayerCell = NULL;
	LoadMapFromFile();
}

void GameMap::Draw() {


	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 10; j++) {
			cout << cells[i][j].id;
		}
		cout << endl;
	}

}

bool GameMap::SetPlayerCell(int PlayerX, int PlayerY) {

	if (!cells[PlayerY][PlayerX].isBlocked()) {
		if (PlayerCell != NULL) {
			PlayerCell->id = 0;
		}
		PlayerCell = &cells[PlayerY][PlayerX];
		PlayerCell->id = '3';
		return true;
	}
	else{
		return false;
	}
}


void GameMap::drawIntro(){
	string line;
		ifstream MyFile("Intro.txt");


		if (MyFile.is_open()) {
			while (getline(MyFile, line)) {
				cout << line << endl;
		}
			cin>>line;
		} else {
			cout << "FATAL ERROR: Introduction Could Not be load" << endl;
		}
}
void GameMap::LoadMapFromFile() {
	string line;
	int row = 0;

	ifstream MyFile("Map.txt");
	//ofstream  CreateFile("Map.txt");

	if (MyFile.is_open()) {		while (getline(MyFile, line)) {
			int length = line.length();
			for (int i = 0; i <= length; i++) {
				if (line[i] == '0') {
					cells[row][i].id = 0;
				} else {
					cells[row][i].id = line[i];
				}

			}
			row++;
		}
	} else {
		cout << "FATAL ERROR: MAP FILE" << endl;
	}
}
