#include <iostream>

using namespace std;

void printa(int A[], int len) {
	cout << A[0];
	for (int i = 1; i < len; i++)
		cout << " " << A[i];
	cout << endl;
}

int ssort(int A[], int len) {
	int t = 0;
	for (int i = 0; i < len; i++) {
		int mini = i;
		for (int j = i; j < len; j++) {
			if (A[j] < A[mini]) {
				mini = j;
			}
		}
		if (mini != i) {
			swap(A[i], A[mini]);
			t++;
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
	t = ssort(a, n);
	printa(a, n);
	cout << t << endl;
	return 0;
}