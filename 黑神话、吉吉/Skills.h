#pragma once
#include<vector>
#include<string>
class Skills {
public:
	//����뼸����������int ���ͣ�����ѧϰ����Ӳ�Ҽ۸�
	vector<string> skill = {"Icebreak","Flamedown"};
	vector<int> hurt = { 10,10 };
	vector<int> state = { 0,0 };
	void setskill(int);
	int getskill(int);
	bool checkskill(int);
};