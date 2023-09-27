#include <iostream>
using namespace std;

int main(void) {
	int n, m, l, a[100][100], b[100][100], i, j, k;
	long int c[100][100] = {0};
	cin >> n >> m >> l;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < m; i++) {
		for (j = 0; j < l; j++) {
			cin >> b[i][j];
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < l; j++) {
			for (k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
			cout << c[i][j];
			if (j != l - 1)
				cout << ' ';
			else
				cout << endl;
		}
	}
	return 0;
}