#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	int n, m, l;
	long matA[100][100] = {};
	long matB[100][100] = {};
	long ans[100][100] = {};
	cin >> n >> m >> l;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> matA[i][j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < l; j++)
			cin >> matB[i][j];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				ans[i][j] += matA[i][k] * matB[k][j];
			}
			cout << ans[i][j];
			if (j != l -1)
				cout << " ";
			if (j == l -1)
				cout << endl;
		}
	}

	return 0;
}

