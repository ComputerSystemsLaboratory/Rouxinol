/*
 * HowManyDivisors.cpp
 *
 *  Created on: 2014/07/21
 *      Author: WanWan1985
 */
#include <iostream>
#include <vector>
using namespace std;

int main(void) {

	int a, b, c;
	cin >> a >> b >> c;
	vector<int> vecValue;
	int h = (b - a);
	for (int i = 0; i <= h; i++) {
		vecValue.push_back(a + i);
	}

	int iDivisorNum = 0;
	for (unsigned int i = 0; i < vecValue.size(); i++) {
		if (c % vecValue.at(i) == 0) {
			iDivisorNum++;
		}
	}
	cout << iDivisorNum << endl;

	return 0;
}