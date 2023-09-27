/*
 * PrintTestCases.cpp
 *
 *  Created on: 2014/07/21
 *      Author: WanWan1985
 */
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	vector<int> vecValue;

	while(1) {
		int a = 0;
		cin >> a;
		if (0 == a) {
			break;
		}
		vecValue.push_back(a);
	}

	for (unsigned int i = 0; i < vecValue.size(); i++) {
		cout << "Case " << i + 1 << ": " << vecValue.at(i) << endl;
	}

	return 0;
}