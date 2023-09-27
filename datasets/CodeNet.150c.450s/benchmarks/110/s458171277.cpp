//
//  AOJ 0558 Chees
//
//  Created by TaoSama on 2015-02-20
//  Copyright (c) 2014 TaoSama. All rights reserved.
//
#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <string>
#include <set>
#include <vector>
#define CLR(x,y) memset(x, y, sizeof(x))

using namespace std;
const int INF = 0x3f3f3f3f;
const int MOD = 1e9 + 7;
const int N = 1e5 + 10;

struct Point {
	int x, y;
	Point(int x = 0, int y = 0): x(x), y(y) {}
} c[15];
int n, m, k, dp[1005][1005];
int d[4][2] = { -1, 0, 1, 0, 0, 1, 0, -1};
char a[1005][1005];

int bfs(int x) {
	memset(dp, 0x3f, sizeof dp);
	queue <Point> q; q.push(c[x - 1]);
	dp[c[x - 1].x][c[x - 1].y] = 0;
	while(!q.empty()) {
		Point cur = q.front(); q.pop();
		for(int i = 0; i < 4; ++i) {
			Point nxt(cur.x + d[i][0], cur.y + d[i][1]);
			if(nxt.x < 1 || nxt.x > n || nxt.y < 1 || nxt.y > m
			        || a[nxt.x][nxt.y] == 'X') continue;
			if(dp[nxt.x][nxt.y] == INF) {
				dp[nxt.x][nxt.y] = dp[cur.x][cur.y] + 1;
				q.push(nxt);
			}
		}
	}
	return dp[c[x].x][c[x].y];
}
int main() {
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
//	freopen("out.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(0);

	while(cin >> n >> m >> k) {
		for(int i = 1; i <= n; ++i) {
			for(int j = 1; j <= m; ++j) {
				cin >> a[i][j];
				if(a[i][j] == 'S')
					c[0].x = i, c[0].y = j;
				if(isdigit(a[i][j]))
					c[a[i][j] - '0'].x = i, c[a[i][j] - '0'].y = j;
			}
		}
		int ans = 0;
		for(int i = 1; i <= k; ++i)
			ans += bfs(i);
		cout << ans << endl;
	}
	return 0;
}