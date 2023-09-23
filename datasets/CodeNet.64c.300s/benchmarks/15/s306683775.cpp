#include "bits/stdc++.h"
using namespace std;

int N, A[100], Count = 0;

void SelectionSort(int A[], int N) {
	for (int i = 0; i < N; i++) {
		int min_j = i;
		for (int j = i + 1; j < N; j++) {
			if (A[j] < A[min_j]) {
				min_j = j;
			}
		}
		if (i != min_j) {
			swap(A[i], A[min_j]);
			Count++;
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	SelectionSort(A, N);
	for (int i = 0; i < N; i++) {
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << Count << endl;
}
