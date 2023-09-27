# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;
using namespace std;

int lcs(string x, string y) {
	int c[1200][1200];
	int m = x.size();
	int n = y.size();
	x = ' ' + x;
	y = ' ' + y;
	for (int i = 1; i <= m; i++) c[i][0] = 0;
	for (int j = 1; j <= n; j++) c[0][j] = 0;
	c[0][0] = 0;

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			if (x[i] == y[j]) {
				c[i][j] = c[i - 1][j - 1] + 1;
			}
			else {
				c[i][j] = max(c[i - 1][j], c[i][j - 1]);
			}
		}
	}
	return c[m][n];
}

int main() {
	int n;
	cin >> n;
	string a, b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		cout << lcs(a, b) << endl;
	}
}