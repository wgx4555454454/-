#include"Skills.h"
using namespace std;
void Skills::setskill(int number)
{
    state[number] = 1;
}
int Skills::getskill(int number)
{
    if (checkskill(number))
    {
        return hurt[number];
    }
    else
    {
        return 0;//Î´Ï°µÃ
    }
}
bool Skills::checkskill(int number)
{
    if (state[number] == 1)
    {
        return 1;
    }
    else
        return 0;
}