#include<iostream>

using namespace std;

void print(long A[], long n) {
	for (long i = 0; i < n; i++) {
		if (i != 0) {
			cout << " ";
		}
		cout << A[i];
	}
	cout << endl;
}

long bubbleSort(long A[], long n) {
	long cnt = 0;
	bool flag = true;
	for (long j = n; flag && j > 0; j--) {
		flag = false;
		for (long i = 1; i < j; i++) {
			if (A[i - 1] > A[i]) {
				long v = A[i];
				A[i] = A[i - 1];
				A[i - 1] = v;
				cnt++;
				flag = true;
			}
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
	
	long cnt = bubbleSort(A, n);
	print(A, n);
	cout << cnt << endl;

	return 0;
}