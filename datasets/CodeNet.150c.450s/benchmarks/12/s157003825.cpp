/*
 * ALDS1_9_A.cpp
 *
 *  Created on: May 5, 2018
 *      Author: 13743
 */

#include<iostream>

using namespace std;

int main() {
	int n;
	int T[251];

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> T[i+1];
	}

	for(int i=1; i<=n; i++) {
		cout << "node " << i << ": key = " << T[i] << ", ";
		if(i/2 > 0) {
			cout << "parent key = " << T[i/2] << ", ";
		}
		if(2*i <= n) {
			cout << "left key = " << T[2*i] << ", ";
		}
		if(2*i+1 <= n) {
			cout << "right key = " << T[2*i+1] << ", ";
		}
		cout << endl;
	}
}



