/*
 * SortingThreeNumbers.cpp
 *
 *  Created on: 2014/07/21
 *      Author: WanWan1985
 */
#include <iostream>
using namespace std;

int main(void) {

	int a, b, c = 0;
	cin >> a >> b >> c;
	int iArray[] = {a, b, c};

	for (int i = 0; i < 2; i++) {
		for (int j = i + 1; j < 3; j++) {
			if (iArray[i] > iArray[j]) {
				int itmp = iArray[i];
				iArray[i] = iArray[j];
				iArray[j] = itmp;
			}
		}
	}

	cout << iArray[0] << " " << iArray[1] << " " << iArray[2] << endl;
	return 0;
}