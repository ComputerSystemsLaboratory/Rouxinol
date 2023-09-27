#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>
#include <string>
#include <tuple>
#include <functional>
#include <numeric>
#include <cmath>
#include <iomanip>
#include <map>
//#include "toollib.h"
#pragma warning (disable:4018)
#define INT_MAX 2147483647

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> c(m);
	vector<vector<int>> dp(m, vector<int>(n + 1, INT_MAX));
	for (int i = 0; i < m; i++) cin >> c[i];
	sort(c.begin(), c.end());
	for (int i = 0; i < m; i++) dp[i][0] = 0;
	for (int j = 1; j <= n; j++) dp[0][j] = j;
	for (int i = 1; i < m; i++) {
		for (int j = 1; j <= n; j++) {
			if (j - c[i] >= 0) dp[i][j] = min(dp[i][j - c[i]] + 1, dp[i - 1][j]);
			else dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[m - 1][n] << endl;
	return 0;
}