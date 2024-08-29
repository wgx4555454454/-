#include <iostream>
#include<iomanip>
#include <string>
#include <filesystem>
#include<windows.h>
#include "menu.h"

using namespace std;

void welcomePage()
{
	// 获取当前控制台句柄  
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	// 设置文本颜色为红色  
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED);

	//黑神话页面图
	vector<string> page = {
	"   HHHHHHHHHHHHHHHHHHH          S            SS                             HHHH  ",//1
	"   H HH     H     HH H           S           SS                        HHHHH      ",//2
	"   H  HH    H    HH  H       SSSSSSS         SS            HH      HHHH  HH       ",//3
	"   H   HH   H   HH   H            S          SS             HH           HH       ",//4
	"   HHHHHHHHHHHHHHHHHHH          S      SSSSSSSSSSSSSS        HH   HHHHHHHHHHHHHHHH",//5
	"            H                 S  S     SS    SS    SS   HHHHHHH          HH       ",//6
	"       HHHHHHHHHHH          S    S S   SSSSSSSSSSSSSS        HH          HH       ",//7
	"            H                    S  S  SS    SS    SS        HH     HHHHHHHHHHHH  ",//8
	"  HHHHHHHHHHHHHHHHHHHHH          S     SSSSSSSSSSSSSS        HH     HH        HH  ",//9
	"                                 S           SS              HH HH  HH        HH  ",//10
	"  HH   HH    HH      HH          S           SS              HHHH   HH        HH  ",//11
	"HH       HH    HH      HH        S           SS               HH    HHHHHHHHHHHH  " //12
	};

	for (int i = 0; i < page.size(); i++) {
		Sleep(100);
		cout << page[i] << endl;
	}

	// 设置文本颜色为蓝色色  
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);

	cout << endl << " ";
	for (int i = 0; i < 55; i++) {
		cout << "——";
	}
	cout << endl << "| ***中国海洋大学2024夏季学期c++课程设计***";
	cout << endl << "| 文字版《黑神话·悟空》";
	cout << endl << "| 游戏介绍：一个简单的文字RPG。";
	cout << endl << "| 版本：1.0";
	cout << endl << "| 作者: ";
	cout << endl << "| 邮箱: ";
	cout << endl << " ";
	for (int i = 0; i < 55; i++) {
		cout << "——";
	}
	cout << endl;

	// 恢复默认的控制台文本颜色  
	SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

}

int main() {
	
	welcomePage();//黑神话页面图
	
	Menu _menu;
	_menu.menu();
	
	return 0;
}
