#include <iostream>
using namespace std;

int main() {

	int n, m;
	int A[100][100], b[100], c[100];

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	for (int i = 0; i < n; i++) {
		c[i] = 0;
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i] += A[i][j] * b[j];
		}
	}

	for (int i = 0; i < n; i++) {
		cout << c[i] << "\n";
	}

	return 0;
}