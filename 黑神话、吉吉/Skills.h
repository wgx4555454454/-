#pragma once

class Skills {
public:
	//����뼸����������int ���ͣ�����ѧϰ����Ӳ�Ҽ۸�
	int MatterFlame_Slash;
	int MatterFrost_Piercing;
	string skill_1 = "Flame Slash"; //����ն
	string skill_2 = "Frost Piercing"; // ��˪����
	Skills() :MatterFlame_Slash(0), MatterFrost_Piercing(0) {}
	Skills(int a, int b) {
		MatterFlame_Slash = a; MatterFrost_Piercing = b;
	}
	int moneySkill_1 = 4;
	int moneySkill_2 = 3;
};