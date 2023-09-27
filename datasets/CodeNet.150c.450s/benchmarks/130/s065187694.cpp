#include<iostream>
using namespace std;

int main() {
	int a[102][102];
	int b[102];

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		for (int i2 = 0; i2 < m; ++i2) {
			cin >> a[i][i2];
		}
	}
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
	}

	for (int i = 0; i < n; ++i) {
		int c = 0;
		for (int i2 = 0; i2 < m; ++i2) {
			c += a[i][i2] * b[i2];
		}
		cout << c << endl;
	}

	return 0;
}