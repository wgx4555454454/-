#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include"role.h"

using namespace std;

class Enemy {
public:
    void setHP();
	int hp;
	int atk;
	int getATK();
 	int getHP();
	vector<string> words;
};

