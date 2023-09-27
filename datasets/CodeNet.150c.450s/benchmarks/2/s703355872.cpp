#include <cstdio>
#include <iostream>

using namespace std;

int INFTY_ALDS16B = 2000000000;
int cnt_ALDS16B = 0;

int partition(int A[], int p, int r) {

	int x = A[r];
	int i = p - 1;
	for (int j = p; j < r; ++j) {
		if (A[j] <= x) {
			++i;
			int tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	int tmp = A[i + 1];
	A[i + 1] = A[r];
	A[r] = tmp;
	return i + 1;
}

int main() {
	int n;
	scanf("%d", &n);

	int A[n];
	for (int i = 0; i < n; ++i) {
		scanf("%d", &A[i]);
	}

	int base = partition(A, 0, n - 1);

	for (int i = 0; i < n; ++i) {
		if (i != 0) {
			cout << " ";
		}
		if (i == base) {
			cout << "[" << A[i] << "]";
		} else {
			cout << A[i];
		}
	}
	cout << endl;

	return 0;
}