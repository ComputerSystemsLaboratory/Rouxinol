#include<iostream>
using namespace std;

int main() {
	int a[102][102];
	int b[102][102];

	int n, m, l;
	cin >> n >> m >> l;

	for (int i = 0; i < n; ++i) {
		for(int i2 = 0; i2 < m;++i2){
			cin >> a[i][i2];
		}
	}

	for (int i = 0; i < m; ++i) {
		for (int i2 = 0; i2 < l; ++i2) {
			cin >> b[i][i2];
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < l; ++j) {
			long long int c = 0;
			for (int k = 0; k < m; ++k) {
				c += a[i][k] * b[k][j];
			}
			cout << c;
			if (j < l - 1) {
				cout << ' ';
			}
		}
		cout << endl;
	}

	return 0;
}