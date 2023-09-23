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

int n, a[105];
ll int dp[105][25];

ll int sagasitehappy(int i, int j)
{
	if (j > 20 || j < 0) return 0;
	if (dp[i][j] >= 0) return dp[i][j];
	if (i == n - 1)
	{
		if (j == a[n-1]) return 1;
		else return 0;
	}
	else
	{
		dp[i][j] = sagasitehappy(i + 1, j + a[i]) + sagasitehappy(i + 1, j - a[i]);
		return dp[i][j];
	}
}

int main()
{
	cin >> n;
	REP(i, n) cin >> a[i];
	REP(i, 105)REP(j, 25)dp[i][j] = -1;
	cout<<sagasitehappy(1, a[0]) << endl;
	return 0;
}