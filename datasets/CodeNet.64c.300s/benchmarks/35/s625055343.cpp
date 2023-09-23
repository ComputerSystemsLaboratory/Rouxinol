#include<iostream>
using namespace std;

int main() {
	int n, u, v, l;
	cin >> n;
	int A[n + 1][n + 1];
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			A[i][j] = 0;
		}
	}

	for (int i = 1; i <= n; i++) {
		cin >> u >> l;
		for (int j = 0; j < l; j++) {
			cin >> v;
			A[u][v] = 1;
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j != 1) cout << ' ';
			cout << A[i][j];
		}
		cout << endl;
	}

	return 0;
}