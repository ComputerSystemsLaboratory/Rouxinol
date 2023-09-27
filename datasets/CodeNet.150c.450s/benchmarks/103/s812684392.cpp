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
int n, s;
int cnt;

void dfs(int i, int j, int sum)
{
	if (i == n)
	{
		if (sum == s) cnt++;
	}
	else if (j <= 9&&sum<=s)
	{
		dfs(i + 1, j + 1, sum + j);
		dfs(i, j + 1, sum);
	}
}

int main()
{
	while (cin >> n >> s)
	{
		if (n == 0 && s == 0) return 0;
		cnt = 0;
		dfs(0, 0, 0);
		cout << cnt << endl;
	}
	return 0;
}