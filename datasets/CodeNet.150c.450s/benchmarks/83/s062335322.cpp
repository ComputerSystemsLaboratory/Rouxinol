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
	struct ITEM {
		int v, w;
	} item[1001];
	for (int i = 1; i <= n; i++)
		cin >> item[i].v >> item[i].w;
	int dp[100 + 1][10000 + 1];
	fill_n(dp[0], 10000 + 1, 0);
	for (int i = 0; i <= n; i++)
		dp[i][0] = 0;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= w; j++) {
			if (item[i].w <= j) {
				dp[i][j] = max(dp[i-1][j], item[i].v + dp[i-1][j-item[i].w]);
			} else {
				dp[i][j] = dp[i-1][j];
			}
		}
	}
	cout << dp[n][w] << endl;
	return 0;
}