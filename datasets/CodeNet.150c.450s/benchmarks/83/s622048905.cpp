#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

int main() {
	int n, W;
	cin >> n >> W;
	int v[1001], w[1001];
	for (int i = 1; i <= n; i++)
		cin >> v[i] >> w[i];
	int dp[101][10001] = {};
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= W; j++) {
			if (w[i] <= j)
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[n][W] << endl;
	return 0;
}