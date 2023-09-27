#include<iostream>

using namespace std;

void print(char A[][2], long n) {
	for (long i = 0; i < n; i++) {
		if (i) {
			cout << " ";
		}
		for (long j = 0; j < 2; j++) {
			cout << A[i][j];
		}
	}
	cout << endl;
}

void Swap2(char A[][2], long a, long b) {
	for (long i = 0; i < 2; i++) {
		char v = A[a][i];
		A[a][i] = A[b][i];
		A[b][i] = v;
	}
}

bool bubbleSort(char A[][2], long n) {
	bool stbl = true;
	bool flag = true;
	for (long m = n; flag && m > 0; m--) {
		flag = false;
		for (long i = 1; i < m; i++) {
			if (A[i - 1][1] > A[i][1]) {
				Swap2(A, i, i - 1);
				flag = true;
			}
		}
	}
	return stbl;
}

bool selectionSort(char A[][2], long n) {
	char O[n][2];
	for (long i = 0; i < n; i++) {
		for (long j = 0; j < 2; j++) {
			O[i][j] = A[i][j];
		}
	}
	for (long i = 0; i < n; i++) {
		long mini = i;
		for (long j = i; j < n; j++) {
			if (A[j][1] < A[mini][1]) {
				mini = j;
			}
		}
		if (mini != i) {
			Swap2(A, i, mini);
		}
	}
	
	bool stbl = true;
	for (long i = 0; i < n; i++) {
		long j;
		if (i == 0 || A[i][1] > A[i - 1][1]) {
			j = 0;
		}
		while ((O[j][1] != A[i][1] || O[j][0] != A[i][0]) && j < n) {
			j++;
		}
		if (j >= n) {
			stbl = false;
			break;
		}
		j++;
	}

	return stbl;
}

int main() {
	long n;
	cin >> n;
	char A[n][2], B[n][2];
	for (long i = 0; i < n; i++) {
		for (long j = 0; j < 2; j++) {
			cin >> A[i][j];
			B[i][j] = A[i][j];
		}
	}

	bool stbl;
	for (int i = 0; i < 2; i++) {
		switch (i) {
			case 0: {
				stbl = bubbleSort(A, n);
				print(A, n);
				break;
			}
			case 1: {
				stbl = selectionSort(B, n);
				print(B, n);
				break;
			}
		}
		switch (stbl) {
			case true: {
				cout << "Stable" << endl;
				break;
			}
			default: {
				cout << "Not stable" << endl;
				break;
			}
		}
	}

	return 0;
}