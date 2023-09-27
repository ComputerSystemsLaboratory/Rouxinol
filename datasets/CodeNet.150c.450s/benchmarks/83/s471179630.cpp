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
	int n, w;
	cin >> n >> w;
	struct { int v, w; } item[101];
	for (int i = 1; i <= n; i++) {
		cin >> item[i].v >> item[i].w;
	}
	int dp[101][10001] = {};
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= w; j++) {
			if (item[i].w <= j)
				dp[i][j] = max(dp[i-1][j], dp[i-1][j-item[i].w] + item[i].v);
			else
				dp[i][j] = dp[i-1][j];
		}
	}
	cout << dp[n][w] << endl;
	return 0;
}