#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<vector>
#include"role.h"

using namespace std;

class Enemy {
public:
    void setHP(int);
	int hp;
	int atk;
	int getATK();
 	int getHP();
	vector<string> words;
	void showword(int); //��������Ҫ�����ͷ̨�ʻ��ǽ�β����

};

