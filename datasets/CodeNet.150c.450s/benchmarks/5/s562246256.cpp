/*
 * ReversingNumbers.cpp
 *
 *  Created on: 2014/07/21
 *      Author: WanWan1985
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void disp(vector<int> a_vecValue) {
	vector<int>::reverse_iterator itr		= a_vecValue.rbegin();
	vector<int>::reverse_iterator itrEnd 	= a_vecValue.rend();

	for(; itr != itrEnd; itr++) {
		cout << *itr;
		if (itr != itrEnd - 1) {
			cout << " ";
		}
		if (itr == itrEnd - 1) {
			cout << endl;
		}
	}
}

int main(void) {

	int n = 0;
	cin >> n;
	vector<int> vecValue;
	for (int i = 0; i < n; i++) {
		int a = 0;
		cin >> a;
		vecValue.push_back(a);
	}
	disp(vecValue);

	return 0;
}