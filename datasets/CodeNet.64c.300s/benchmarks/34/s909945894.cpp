#include<iostream>
using namespace std;

void trase(int* A, int n) {
	for (int i = 0; i < n; ++i) {
		if (i > 0) { cout << ' '; }
		cout << A[i];
	}
	cout << endl;
}

void insertion(int* A, int n) {
	int v, j;
	for (int i = 1; i < n; ++i) {
		v = A[i];
		j = i - 1;
		while (j >= 0 && A[j] > v) {
			A[j + 1] = A[j];
			j--;
		}
		A[j + 1] = v;
		trase(A, n);
		}

}

int main() {
	int n;
	cin >> n;

	int* A = new int[n];
	for (int i = 0; i < n ; ++i) {
		cin >> A[i];

	}

	trase(A, n);
	insertion(A, n);

	delete[] A;

}
