#pragma once
#include<vector>
#include<string>
class Skills {
public:
	//随便想几个技能名，int 类型，技能学习所需硬币价格
	vector<string> skill = {"Icebreak","Flamedown"};
	vector<int> hurt = { 10,10 };
	vector<int> state = { 0,0 };
	void setskill(int);
	int getskill(int);
	bool checkskill(int);
};