#include <iostream>
#include <Windows.h>
/*
 * @Author: Lumen
 * @Date: 2021-08-17 21:42:08
 * @LastEditTime: 2021-08-17 22:20:10
 * @LastEditors: Lumen
 * @Description: cinåcoutå­¦ä¹ 
 * ð±âðð±âðð±âðð±âðð±âðð±âðð±âðð±âðð±âðð±âð
 */
using namespace std;
int main()
{
    SetConsoleTitle("å²"); //è®¾ç½®æ§å¶å°æ é¢

    /* ä¼¤å®³ */
    double value_attack = 57.88;
    /* ä¼¤å®³æé¿å¼ */
    double value_attack_growth = 4.5;
    /* æ»å»è·ç¦» */
    double value_attack_distance = 172;
    /* æ¤ç²å¼ */
    double value_defence = 27.54;
    /* æ¤ç²æé¿å¼ */
    double value_defence_growth = 3.0;

    cout << "åç§°ï¼å¾·çè¥¿äºä¹å" << endl;
    cout << "ä¼¤å®³ï¼" << value_attack << "(+" << value_attack_growth << ")\t"
         << "æ»å»è·ç¦»ï¼" << value_attack_distance << endl;
    return 0;
}