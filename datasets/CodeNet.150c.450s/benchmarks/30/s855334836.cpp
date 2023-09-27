#include<iostream>

using namespace std;

void print(long A[], long n) {
	cout << A[0];
	for (long i = 1; i < n; i++) {
		cout << " " << A[i];
	}
	cout << endl;
}

long selectionSort(long A[], long n) {
	long cnt = 0;
	for (long i = 0; i < n; i++) {
		long minj = i;
		for (long j = i; j < n; j++) {
			if (A[j] < A[minj]) {
				minj = j;
			}
		}
		if (minj != i) {
			long v = A[i];
			A[i] = A[minj];
			A[minj] = v;
			cnt++;
		}
	}
	return cnt;
}

int main() {
	long n;
	cin >> n;
	long A[n];
	for (long i = 0; i < n; i++) {
		cin >> A[i];
	}
	
	long cnt = selectionSort(A, n);
	print(A, n);
	cout << cnt << endl;

	return 0;
}