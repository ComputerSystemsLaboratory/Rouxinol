#include <bits/stdc++.h>
using namespace std;

int A[20000001], B[20000001];
int C[10000];
int n;

int main() {
	cin >> n;
	for (int i = 0; i < 10000; i++)
		C[i] = 0;
	for (int i = 1; i <= n; i++) {
		cin >> A[i];
		C[A[i]]++;
	}
	for (int i = 1; i < 10000; i++)
		C[i] += C[i - 1];
	for (int i = n; i > 0; i--) {
		B[C[A[i]]] = A[i];
		C[A[i]]--;
	}
	for (int i = 1; i < n; i++)
		cout << B[i] << " ";
	cout << B[n] << endl;
	return 0;
}

