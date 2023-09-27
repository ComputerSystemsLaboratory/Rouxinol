#include <iostream>
#include <algorithm>

using namespace std;

int partition(int A[], int p, int r) {
	int x = A[r];
	int i = p;

	for (int j = p; j < r; j++) {
		if (A[j] <= x) {
			swap(A[i++], A[j]);
		}
	}
	swap(A[i], A[r]);

	return i;
}

int main() {
	int n;
	cin >> n;
	int A[n], suffix;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	suffix = partition(A, 0, n - 1);

	for (int i = 0; i < n; i++) {
		if (i == suffix) {
			cout << "[" << A[i] << "]";
		}
		else {
			cout << A[i];
		}

		if (i < n - 1) {
			cout << " ";
		}
	}
	cout << endl;

	return 0;
}