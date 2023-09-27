
#include <iostream>
#include <algorithm>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

int q;
int main() {
	cin >> q;
	for (int i = 0; i < q; i++) {
		string x, y;
		cin >> x >> y;
		int m = x.size();
		int n = y.size();
		x = ' ' + x;
		y = ' ' + y;
		int maxl = 0;
		int c[1001][1001];
		c[0][0] = 0;
		for (int i = 1; i <= m; i++) {
			c[i][0] = 0;
		}
		for (int j = 1; j <= n; j++) {
			c[0][j] = 0;
		}
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= n; j++) {
				if (x[i] == y[j]) {
					c[i][j] = c[i-1][j-1] + 1;
				} else {
					c[i][j] = max(c[i][j - 1], c[i - 1][j]);
				}
				maxl = max(maxl, c[i][j]);
			}
		}
		cout << maxl << endl;
	}
	return 0;
}