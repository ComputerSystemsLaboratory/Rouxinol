/*
 * Rectangle.cpp
 *
 *  Created on: 2014/07/20
 *      Author: WanWan1985
 */
#include <iostream>
#include <string>
#include <stdlib.h> // for atof
using namespace std;

int main(void) {

	string strLine;
	// 入力
	getline(cin, strLine);

	unsigned int iPos = strLine.find(" ", 0);
	double dLengthWise = atof(strLine.substr(0, iPos).c_str());
	double dCrossWise = atof(strLine.substr(iPos + 1, strLine.size()).c_str());

	// 出力
	cout << dLengthWise * dCrossWise << " " << 2 * (dLengthWise + dCrossWise) << endl;

	return 0;
}