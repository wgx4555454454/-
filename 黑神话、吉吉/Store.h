#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include"Skills.h"

using namespace std;

class Store :public Skills {
public:
	int Hpotion;//Ѫ��ҩˮ�۸�
	int Mpotion;//������ħ��ҩˮ���۸�
	Store() :Hpotion(0), Mpotion(0) {}
	~Store() {}
	void showStore();
	void Buy(Role& Role);
};