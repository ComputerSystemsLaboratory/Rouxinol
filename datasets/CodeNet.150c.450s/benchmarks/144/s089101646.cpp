#include <iostream>
using namespace std;

int main() {
	int n, m, l, mat1[100][100], mat2[100][100];
	cin >> n >> m >> l;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> mat1[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < l; j++) {
			cin >> mat2[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			long long sum = 0;
			for (int k = 0; k < m; k++) {
				sum += mat1[i][k] * mat2[k][j];
			}
			cout << sum;
			if (j < l - 1) cout << " ";
		}
		cout << endl;
	}
}