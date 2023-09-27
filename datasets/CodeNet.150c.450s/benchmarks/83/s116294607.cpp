#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <iomanip>
#define INF 1050000000
 
using namespace std;

int n;
int w[101];
int v[101];
int dp[101][10001];

int rec(int i, int j) 
{
	int res;
	if (dp[i][j] >= 0) return dp[i][j];

	if (i == n) res = 0;
	else if (w[i] > j)
		res = rec(i + 1, j);
	else
		res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
	dp[i][j] = res;
	return (res);
}

int main(void)
{
	int W;

	cin >> n >> W;
	memset(dp, -1, sizeof(dp));

	for (int i = 0; i < n; i++) {
		cin >> v[i] >> w[i];
	}
	cout << rec(0, W) << endl;

	return (0);
}