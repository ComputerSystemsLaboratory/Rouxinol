/*
 * MinMaxAndSum.cpp
 *
 *  Created on: 2014/07/21
 *      Author: WanWan1985
 */
#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(void) {

	long int n;
	cin >> n;

	vector<long int> vecValue;
	vecValue.reserve(n);
	for (long int i = 0; i < n; i++) {
		long int x;
		cin >> x;
		vecValue.push_back(x);
	}

	long long int iResult = 0;
	for (long int i = 0; i < vecValue.size(); i++) {
		iResult += vecValue.at(i);
	}

	cout << *min_element(vecValue.begin(), vecValue.end()) << " "
		 << *max_element(vecValue.begin(), vecValue.end()) << " "
		 << iResult << endl;


	return 0;
}