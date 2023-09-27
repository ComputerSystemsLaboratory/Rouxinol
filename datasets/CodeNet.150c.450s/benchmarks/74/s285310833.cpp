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
	int n, m;
	cin >> n >> m;
	int c[20];
	REP(i, m)
		cin >> c[i];
	int dp[50001];
	fill_n(dp, 50001, INF);
	dp[0] = 0;
	REP(i, m)
	FOR(j, c[i], n+1)
		dp[j] = min(dp[j], dp[j-c[i]] + 1);
	cout << dp[n] << endl;
	return 0;
}