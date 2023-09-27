#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
//#include "MyMath.h"
//#include "DataStructure.h"
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <cstring>
#include <iostream>
using namespace std;
const int INF = 2000000000;
int dp[101][10001];
int main() {
	int n, W;
	cin >> n >> W;
	int v[100], w[100];
	for (int i = 0; i < n; i++)
		cin >> v[i] >> w[i];
	fill(dp[0], dp[n], -1);
	fill(dp[0], dp[1], 0);
	for(int i = 1; i <= n; i++)
		for (int j = 0; j <= W; j++) {
			if (j < w[i - 1]) dp[i][j] = dp[i - 1][j]; //cout << "fe " << dp[i - 1][j] << " "; }
			else dp[i][j] = max(dp[i - 1][j - w[i - 1]] + v[i - 1], dp[i - 1][j]);
			//cout << "i " << i << " j " << j << "  " << dp[i][j] << endl;
		}
	cout << dp[n][W] << endl;
	return 0;
}