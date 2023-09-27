#include "bits/stdc++.h"
using namespace std;

int N;
string A[100], B[100];

void BubbleSort(string A[], int N) {
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = 0; i < N - 1; i++) {
			if (A[i][1] > A[i + 1][1]) {
				flag = true;
				swap(A[i], A[i + 1]);
			}
		}
	}
}

void SelectionSort(string A[], int N) {
	for (int i = 0; i < N; i++) {
		int min_j = i;
		for (int j = i + 1; j < N; j++) {
			if (A[j][1] < A[min_j][1]) {
				min_j = j;
			}
		}
		if (i != min_j) {
			swap(A[i], A[min_j]);
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i], B[i] = A[i];
	BubbleSort(A, N);
	for (int i = 0; i < N; i++) {
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << "Stable" << endl;
	bool check = true;
	SelectionSort(B, N);
	for (int i = 0; i < N; i++) {
		if (i) cout << " ";
		cout << B[i];
		if (A[i] != B[i]) check = false;
	}
	cout << endl;
	if (check) cout << "Stable" << endl;
	else cout << "Not stable" << endl;
}
