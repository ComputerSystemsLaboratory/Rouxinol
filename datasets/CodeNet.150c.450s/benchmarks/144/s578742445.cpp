// class point	の練習（クラスの高度な実装）
#include <iostream>
#include <vector>
#include <algorithm>

typedef long long llong;
using namespace std;



int main() {
	int n, m, l;
	long A[100][100];
	long B[100][100];
	llong C[100][100] = { 0 };

	cin >> n >> m >> l;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> A[i][j];
		}
	}
	for (int j = 0; j < m; j++) {
		for (int k = 0; k < l; k++) {
			cin >> B[j][k];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < l; k++) {
			for (int j = 0; j < m; j++) {
				C[i][k] += A[i][j] * B[j][k];
			}
			cout << C[i][k];
			if (k != l - 1)cout << " ";
		}
		cout << endl;
	}

	return 0;
}

