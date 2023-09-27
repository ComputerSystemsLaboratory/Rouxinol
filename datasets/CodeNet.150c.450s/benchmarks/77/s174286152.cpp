#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<functional>
using namespace std;
int main() {
	int n;
	bool a[21][21];
	while (cin >> n&&n != 0) {
		for (int i = 0; i <= 20; i++) {
			for (int j = 0; j <= 20; j++) a[i][j] = false;
		}
		int c, d;
		for (int i = 0; i<n; i++) {
			cin >> c >> d;
			a[c][d] = true;
		}
		int sum = n, m;
		int x = 10, y = 10;
		cin >> m;
		char g;
		for (int i = 0; i<m; i++) {
			cin >> g >> c;
			int e=0, f=0;
			int x2 = x, y2 = y;
			if (g == 'N') {
				y += c;
				f = 1;
			}
			else if (g == 'S') {
				y -= c;
				f = -1;
			}
			else if (g == 'E') {
				x += c;
				e = 1;
			}
			else {
				x -= c;
				e = -1;
			}
			int j = y2, i2 = x2;
			for (;;) {
				if (i2 == x&&j == y) break;
				if (a[i2][j]) {
					sum--;
					a[i2][j] = false;
				}
				j += f;
				i2 += e;
			}
			if (a[x][y]) {
				sum--;
				a[x][y] = false;
			}
		}
		if (sum == 0) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
}