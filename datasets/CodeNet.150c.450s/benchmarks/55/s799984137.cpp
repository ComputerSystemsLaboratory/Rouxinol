/*
 * SumOfNumbers.cpp
 *
 *  Created on: 2014/07/25
 *      Author: WanWan1985
 */
#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;

typedef unsigned int u_int;

int main() {

	vector<int> vecResult;
	while(1) {
		string strNumbers;
		cin >> strNumbers;
		if (0 == atoi(strNumbers.c_str())) {
			break;
		}

		int iResult = 0;
		for (u_int i = 0; i < strNumbers.size(); i++) {
			iResult += atoi(((strNumbers.substr(i, 1)).c_str()));
		}
		vecResult.push_back(iResult);
	}

	for (u_int i = 0; i < vecResult.size(); i++) {
		cout << vecResult.at(i) << endl;
	}

	return 0;
}