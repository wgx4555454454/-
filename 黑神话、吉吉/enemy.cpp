#include "Enemy.h"
#include <windows.h>  //这点有byte不明确
using namespace std;
void Enemy::setHP(int newhp)
{
	this->hp = newhp;
}

int Enemy::getATK()
{
	return atk;
}
int Enemy::getHP()
{
	return hp;
}
void Enemy::showword(int number)
{
	string word = words[number];
	for (int i = 0; i < word.size(); i++)
	{
		Sleep(50);
		cout << word[i];
	}

}