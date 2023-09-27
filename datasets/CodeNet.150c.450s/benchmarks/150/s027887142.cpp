#include<iostream>
using namespace std;

int main(void) {
	unsigned short A[2000001], B[2000001];
	int C[10001], n;
	cin >> n;

	for (int i = 0; i <= 10000; i++) {
		C[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		cin >> A[i + 1];
		C[A[i + 1]]++;
	}
	for (int i = 1; i <= 10000; i++) C[i] += C[i - 1];
	for (int i = 1; i <= n; i++) {
		B[C[A[i]]] = A[i];
		C[A[i]] --;
	}
	for (int i = 1; i <= n; i++) {
		if (i > 1) cout << " ";
		cout << B[i];
	}
	cout << endl;
	return 0;
}