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

	//斗破苍穹页面图
	string page[11] = {
		"   00      00                                 00             00             00               0              ",//1
		"     00    00            000000000000         00          00000000000000000000000    000000000000000000     ",//2
		"00     00  00                  00             00             00             00      00    0      0    00    ",//3
		"  00       00                 00        00000000000000              00               0  0          0  0     ",//4
		"    00     00                00         00    00    0            00    00              00000000000000       ",//5
		"           00               00          00  00000000          00          00                       00       ",//6
		"000000000000000000000      0000000000   00   0    0        00  000000000000  00        00000000000000       ",//7
		"           00             000      00   00    0000       00    00    0  00     00     00                    ",//8
		"           00            0000      00   00     00              00     000              00000000000000       ",//9
		"           00           00 00      00   00    0  0             00         00                    0  00       ",//10
		"           00              0000000000  00   00    000          0000000000000                     00         " //11
	};

	for (int i = 0; i < 11; i++) {
		Sleep(100);
		cout << page[i] << endl;
	}

	// 设置文本颜色为蓝色色  
	SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN);

	cout << endl << " ";
	for (int i = 0; i < 55; i++) {
		cout << "——";
	}
	cout << endl << "|***中国海洋大学2024夏季学期c++课程设计***";
	cout << endl << "| 文字版《斗破苍穹之异火通天》";
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
	
	welcomePage();//斗破苍穹页面图
	
	Menu _menu;
	_menu.menu();
	
	return 0;
}
