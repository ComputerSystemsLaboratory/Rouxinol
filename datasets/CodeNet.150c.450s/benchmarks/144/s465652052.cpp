#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, m, l;
	cin >> n >> m >> l;
	vector<vector<long long>> A(n, vector<long long>(m)), B(m, vector<long long>(l)), C(n, vector<long long>(l));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> B[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			for (int k = 0; k < l; k++) {
				C[i][k] += A[i][j] * B[j][k];
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l - 1; j++) {
			cout << C[i][j] << ' ';
		}
		cout << C[i][l - 1] << endl;
	}
	return 0;
}