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
	int n, m;
	int c[20];
	cin >> n >> m;
	for (int i = 0; i < m; i++)
		cin >> c[i];
	int dp[50001] = {};
	fill_n(&dp[1], 50000, INT_MAX / 2);
	for (int i = 0; i < m; i++)
		for (int j = c[i]; j <= n; j++)
			dp[j] = min(dp[j], dp[j-c[i]] + 1);
	cout << dp[n] << endl;
	return 0;
}