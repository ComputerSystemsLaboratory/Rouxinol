/*
 * Watch.cpp
 *
 *  Created on: 2014/07/21
 *      Author: WanWan1985
 */
#include <iostream>
#include <math.h> // for fmod
using namespace std;

int main(void) {

	// 入力
	double dTotalSecond;	// 通算秒
	cin >> dTotalSecond;

	// 時
	int iHour = (int)(dTotalSecond / 3600);

	// 分
	double dmod = fmod(dTotalSecond, 3600);
	int iMinute = (int)(dmod / 60);

	// 秒
	int iSecond = (int)fmod(dmod, 60);

	// 出力
	cout << iHour << ":" << iMinute << ":" << iSecond << endl;

	return 0;
}