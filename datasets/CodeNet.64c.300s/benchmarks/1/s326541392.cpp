#include<iostream>
using namespace std;

static const int MAX = 100000;

int n;

int partition(int A[], int p, int r) {
	int x = A[r-1];
	int i = p - 1;
	int tmp;
	for (int j = p; j < r-1; j++) {
		if (A[j] <= x) {
			i += 1;
			tmp = A[i];
			A[i] = A[j];
			A[j] = tmp;
		}
	}
	tmp = A[i + 1];
	A[i + 1] = A[r-1];
	A[r-1] = tmp;
	return i + 1;
}

int main() {
	cin >> n;
	int A[MAX];
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	int g = partition(A, 0, n);
	for (int i = 0; i < n; i++) {
		if (i > 0) {
			cout << " ";
		}
		if (i == g) {
			cout << "[" << A[i] << "]";
		}
		else {
			cout << A[i];
		}
	}
	cout << endl;
}
