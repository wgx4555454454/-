#include <iostream>
#include<iomanip>
#include <string>
#include <filesystem>
#include<windows.h>
#include "menu.h"

using namespace std;

void welcomePage()
{
	HANDLE hConsole;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_INTENSITY | FOREGROUND_RED);
	/*
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 13);
	*/
	for (int i = 0; i < 8; i++)
		cout << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "0000000000000000000000000000000000000000000" << endl << endl;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, 10);
	cout << '\t' << '\t' << '\t' << '\t';
	cout << '\t' << "   ********************" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << '\t' << "       游戏制作信息" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << '\t' << "   ********************" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "   制作人：中国海洋大学2024夏季学期c++课程设计" << endl;
	cout << '\t' << '\t' << '\t' << '\t' << "   同学" << endl << endl;
	cout << '\t' << '\t' << '\t' << '\t';
	
	return ;
}
int main() {
	welcomePage();//斗破苍穹页面图
	Menu _menu;
	_menu.menu();
	return 0;
}