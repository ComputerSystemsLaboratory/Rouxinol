#include<iostream>
using namespace std;

int main() {
	int n, m, l;
	cin >> n >> m >> l;

	int A[100][100] = {};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}

	int B[100][100] = {};
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> B[i][j];
		}
	}
	
	long long C[100][100] = {};
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			cout << C[i][j];
			(j == l - 1) ? (cout << endl) : (cout << " ");
		}
	}

	return 0;
}
