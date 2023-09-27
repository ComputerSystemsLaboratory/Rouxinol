#include<iostream>
using namespace std;

int main() {
	int a[101][101], b[101][101], n, m, l, i, j, k;
	long long tmp;
	cin >> n >> m >> l;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= m; j++)cin >> a[i][j];
	}
	for (i = 1; i <= m; i++) {
		for (j = 1; j <= l; j++)cin >> b[i][j];
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= l; j++) {
			tmp = 0;
			for (k = 1; k <= m; k++) tmp += a[i][k] * b[k][j];
			cout << tmp;
			if (j != l)cout << " ";
			else cout << endl;
		}
	}
	return 0;
}