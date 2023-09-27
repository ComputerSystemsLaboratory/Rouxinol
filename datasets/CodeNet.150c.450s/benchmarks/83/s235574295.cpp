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

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define REP(i,n) for (int i=0;i<(n);i++)

#define INF INT_MAX / 2 - 1
#define PI 2*acos(0.0)
#define ll long long

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
	int n, w;
	cin >> n >> w;
	struct { int v, w; } item[100];
	FOR(i, 1, n+1)
		cin >> item[i].v >> item[i].w;
	int dp[101][10001] = {};
	FOR(i, 1, n+1)
	FOR(j, 1, w+1)
		if (j < item[i].w)
			dp[i][j] = dp[i-1][j];
		else
			dp[i][j] = max(dp[i-1][j], dp[i-1][j-item[i].w] + item[i].v);
	cout << dp[n][w] << endl;
	return 0;
}