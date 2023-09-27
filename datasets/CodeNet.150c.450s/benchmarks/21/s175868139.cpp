/*
 * X_Cubic.cpp
 *
 *  Created on: 2014/07/20
 *      Author: WanWan1985
 */
#include <iostream>
#include <math.h>
using namespace std;

int main(void) {
	// 入力値
	int iInput;
	cin >> iInput;

	// 実行
	double dOutput = pow((double)iInput, 3.0);

	// 出力
	cout << (int)dOutput << endl;

	return 0;
}