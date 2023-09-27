#include <iostream>
#include <algorithm>

using namespace std;

void printa(int A[], int len) {
	cout << A[0];
	for (int i = 1; i < len; i++)
		cout << " " << A[i];
	cout << endl;
}

void isort(int A[], int len) {
	printa(A, len);
	for (int i = 1; i < len; i++) {
		int key = A[i];
		int j = i - 1;
		while (j >= 0 && A[j] > key) {
			A[j+1] = A[j];
			j--;
		}
		A[j+1] = key;
		printa(A, len);
	}
}

int main() {
	int n, *a;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	isort(a, n);
	delete[] a;
	return 0;
}