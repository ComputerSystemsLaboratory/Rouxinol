/*
 * InsertionSort.cpp
 *
 *  Created on: 2014/07/25
 *      Author: WanWan1985
 */
#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& a_rvecIntValue);

int main(void) {

	int iNum = 0;
	cin >> iNum;
	vector<int> vecIntValue;
	while (iNum) {
		int iIntValue = 0;
		cin >> iIntValue;
		vecIntValue.push_back(iIntValue);
		iNum--;
	}

	sort(vecIntValue);

	return 0;
}

void sort(vector<int>& a_rvecIntValue) {

	for (unsigned int i = 0; i < a_rvecIntValue.size(); i++) {

		if (i != 0) {

			int iIntValue = a_rvecIntValue.at(i);
			int j = i - 1;
			while ((j >= 0) && (a_rvecIntValue.at(j) > iIntValue)) {
				a_rvecIntValue.at(j+1) = a_rvecIntValue.at(j);
				j--;
			}
			a_rvecIntValue.at(j+1) = iIntValue;
		}

		for (unsigned int k = 0; k < a_rvecIntValue.size(); k++) {
			cout << a_rvecIntValue.at(k);
			if (k != a_rvecIntValue.size() - 1) {
				cout << " ";
			}
		}
		cout << endl;
	}
}