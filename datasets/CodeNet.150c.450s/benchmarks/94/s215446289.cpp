#include <iostream>

using namespace std;

void printa(int A[], int len) {
	cout << A[0];
	for (int i = 1; i < len; i++)
		cout << " " << A[i];
	cout << endl;
}

int bsort(int A[], int len) {
	int t = 0;
	for (int i = 0; i < len; i++) {
		for (int j = len - 1; j >= i + 1; j--) {
			if (A[j] < A[j-1]) {
				swap(A[j], A[j-1]);
				t++;
			}
		}
	}
	return t;
}

int main() {
	int n, *a, t;
	cin >> n;
	a = new int[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
	t = bsort(a, n);
	printa(a, n);
	cout << t << endl;
	return 0;
}