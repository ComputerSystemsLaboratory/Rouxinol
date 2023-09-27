#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <list>
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

int w, h;
int isl[55][55];

int di[8] = { -1, -1, -1, 0, 0, 1, 1, 1 }; int dj[8] = { -1, 0, 1, -1, 1, -1, 0, 1 };

void dfs(int i, int j)
{
	if (isl[i][j] == 1)
	{
		isl[i][j] = 0;
		REP(k, 8) dfs(i + di[k], j + dj[k]);
	}
}

int main()
{
	while (cin >> w >> h, w)
	{
		REP(i, h)REP(j, w) cin >> isl[i][j];
		int cnt = 0;
		REP(i, h)REP(j, w)
		{
			if (isl[i][j] == 1)
			{
				cnt++;
				dfs(i, j);
			}
		}
		cout << cnt << endl;
	}
	return 0;
}