#include <iostream>
#include<iomanip>
#include <string>
#include <filesystem>
#include "Menu.h"

using namespace std;

void Game::game() {
	cout << "welcome to our game" << endl;
	cout << "this is a world about RPG" << endl;
	cout << "please enjoy your game :)" << endl;
	system("pause");//��������ʼ�����ͼ�������ƶ�
	int ending = 0;
	while(passes<3){
		switch (passes) {
		case 0:cout << "The first adventure:" << endl;
			ending = move(map1);
			if (ending == 1)passes++;
			break;
		case 1:cout << "The second adventure:" << endl;
			move(map2);
			if (ending == 1)passes++;
			break;
		case 2:cout << "The third adventure:" << endl;
			move(map3);
			if (ending == 1)passes++;
			break;
		}
	}
	cout << "over";
}

