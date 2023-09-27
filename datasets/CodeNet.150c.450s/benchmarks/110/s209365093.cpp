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

char city[1005][1005];
int way[1005][1005];
int di[4] = { -1, 0, 0, 1 }; int dj[4] = { 0, -1, 1, 0 };

int main()
{
	int h, w, n;
	cin >> h >> w >> n;
	REP(i, h)REP(j, w) cin >> city[i][j];
	typedef queue<pair<int, int>> que;
	que start;
	REP(i, h)REP(j, w)
	{
		if (city[i][j] == 'S') start.push(make_pair(i, j));
	}
	FOR(k, 1, n+1)
	{
		REP(i, h)REP(j, w)
		{
			if (city[i][j] - '0' == k)
			{
				start.push(make_pair(i, j));
			}
		}
	}
	int cnt = 0;

	REP(i,n)
	{
		REP(i, 1005)REP(j, 1005) way[i][j] = INF;
		que q; 
		way[start.front().first][start.front().second] = 0;
		q.push(start.front());
		start.pop();
		while (1)
		{
			int tmpi = q.front().first; int tmpj = q.front().second;
			q.pop();
			if (tmpi == start.front().first&&tmpj == start.front().second)
			{
				cnt += way[tmpi][tmpj];
				break;
			}
			else
			{
				REP(i, 4)
				{
					if (tmpi + di[i] >= 0 && tmpi + di[i] < h &&tmpj + dj[i] >= 0 && tmpj + dj[i] < w && city[tmpi + di[i]][tmpj + dj[i]] != 'X' && way[tmpi + di[i]][tmpj + dj[i]] == INF)
					{
						way[tmpi + di[i]][tmpj + dj[i]] = way[tmpi][tmpj] + 1;
						q.push(make_pair(tmpi + di[i], tmpj + dj[i]));
					}
				}
			}
		}
	}
	cout << cnt << endl;

	return 0;
}