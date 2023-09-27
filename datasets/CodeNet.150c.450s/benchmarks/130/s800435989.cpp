#include <iostream>
#include<cstdio>
#include<stdio.h>
using namespace std;

int main() {
	int n, m,number;

	int A[100][100];
	int b[100];

	int answer[100] = {};

	cin >> n >> m;


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> number;
			A[i][j] = number;
		}
	}

	for (int i = 0; i < m; i++) {
		cin >> number;
		b[i] = number;
	}


	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			answer[i] += A[i][j] * b[j];
			
		}
	}
	
	for (int i = 0; i < n; i++) {
		cout << answer[i] << endl;
	}

	return 0;
}


