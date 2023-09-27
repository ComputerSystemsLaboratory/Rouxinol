#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <functional>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
//#define scanf scanf_s

int N, W;
int v[105],w[105],dp[105][10005];

int sagasitehappy(int i, int j)
{
	if (dp[i][j] >= 0) return dp[i][j];
	int res;
	if (i == N) res = 0;
	else if (w[i] > j) res = sagasitehappy(i + 1, j);
	else
	{
		res = max(sagasitehappy(i + 1, j), sagasitehappy(i + 1, j - w[i]) + v[i]);
	}
	dp[i][j] = res;
	return res;
}

int main()
{
	cin >> N >> W;
	REP(i, N) cin >> v[i] >> w[i];
	REP(i, 105)REP(j, 10005) dp[i][j] = -1;
	cout << sagasitehappy(0, W) << endl;
	return 0;

}