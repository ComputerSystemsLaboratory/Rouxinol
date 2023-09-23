#include <cstdio>
#include <iostream>
using namespace std;

int main() {
	int m, n;
	cin >> n >> m;
	int A[100][100];
	int B[100],C[100];

	for (int s = 0; s < 100; s++) {
		for (int r = 0; r < 100; r++) {
			A[s][r] = 0;
		}
		B[s] = 0;
		C[s] = 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}

	for (int i = 0; i < m; i++) {
		cin >> B[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			C[i] += B[j] * A[i][j];
		}
		cout << C[i] << endl;
	}

	return 0;
}