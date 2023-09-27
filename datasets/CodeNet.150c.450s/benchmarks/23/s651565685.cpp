/*
 * ALDS1_10_A.cpp
 *
 *  Created on: May 5, 2018
 *      Author: 13743
 */

#include<iostream>

using namespace std;

int F[44];

int fib(int n) {
	if(F[n] == 0) {
		F[n] = fib(n-2) + fib(n-1);
	}
	return F[n];
}

int main() {
	int n;
	cin >> n;

	F[0] = F[1] = 1;

	cout << fib(n) << endl;
}



