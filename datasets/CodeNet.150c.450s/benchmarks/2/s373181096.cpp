/*
 * ALDS1_6_B.cpp
 *
 *  Created on: Apr 30, 2018
 *      Author: 13743
 */

#include<iostream>
#include<algorithm>

using namespace std;

int partition(int* A, int l, int r) {
	int x = A[r];
	int i = l - 1;
	for(int j=l; j<r; j++) {
		if(A[j] <= x) {
			i++;
			std::swap(A[i], A[j]);
		}
	}
	swap(A[i+1], A[r]);
	return i+1;
}

int main() {
	int n;
	int A[100000];

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> A[i];
	}

	int c = partition(A, 0, n-1);

	if(c == 0) {
		cout << "[" << A[0] << "]";
	}
	else {
		cout << A[0];
	}
	for(int i=1; i<n; i++) {
		cout << " ";
		if(c == i) {
			cout << "[" << A[i] << "]";
		}
		else {
			cout << A[i];
		}
	}
	cout << endl;
}



