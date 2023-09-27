#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <functional>
#include <complex>
#include <cmath>
#include <ccomplex>
using namespace std;

void solve() {
	string x, y;
	cin >> x >> y;
	int xlen = x.length();
	int ylen = y.length();
	int dp[1010][1010];
	dp[0][0] = 0;

	for (int i = 0; i <= xlen; i++) {
		for (int j = 0; j <= ylen; j++) {
			if (i == 0 || j == 0) {
				dp[i + 1][j + 1] = 0;
			}
			else if (x[i - 1] == y[j - 1]) {
				dp[i + 1][j + 1] = dp[i][j] + 1;
			}
			else {
				dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
			}
		}
	}
	cout << dp[xlen + 1][ylen + 1] << endl;
}
int main() {
	int q;
	cin >> q;
	for (int i = 0; i < q; i++)solve();
}