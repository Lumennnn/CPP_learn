#include <iostream>
#include <Windows.h>
/*
 * @Author: Lumen
 * @Date: 2021-08-17 21:42:08
 * @LastEditTime: 2021-08-17 22:20:10
 * @LastEditors: Lumen
 * @Description: cin和cout学习
 * 🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍🐱‍🏍
 */
using namespace std;
int main()
{
    SetConsoleTitle("冲"); //设置控制台标题

    /* 伤害 */
    double value_attack = 57.88;
    /* 伤害成长值 */
    double value_attack_growth = 4.5;
    /* 攻击距离 */
    double value_attack_distance = 172;
    /* 护甲值 */
    double value_defence = 27.54;
    /* 护甲成长值 */
    double value_defence_growth = 3.0;

    cout << "名称：德玛西亚之力" << endl;
    cout << "伤害：" << value_attack << "(+" << value_attack_growth << ")\t"
         << "攻击距离：" << value_attack_distance << endl;
    return 0;
}