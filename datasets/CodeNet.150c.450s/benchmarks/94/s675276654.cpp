#include "bits/stdc++.h"
using namespace std;

int N, A[100], Count = 0;

void BubbleSort(int A[], int N) {
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = 0; i < N - 1; i++) {
			if (A[i] > A[i + 1]) {
				flag = true;
				swap(A[i], A[i + 1]);
				Count++;
			}
		}
	}
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];
	BubbleSort(A, N);
	for (int i = 0; i < N; i++) {
		if (i) cout << " ";
		cout << A[i];
	}
	cout << endl;
	cout << Count << endl;
}
