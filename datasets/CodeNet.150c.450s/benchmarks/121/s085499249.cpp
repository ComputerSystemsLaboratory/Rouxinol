//
//  AOJ 0118 Property Distribution
//
//  Created by TaoSama on 2015-02-19
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

int n, m;
char a[105][105];
int d[4][2] = {1, 0, -1, 0, 0, 1, 0, -1};
void dfs(int x, int y, char cur) {
	a[x][y] = 'X';
	for(int i = 0; i < 4; ++i) {
		int nx = x + d[i][0], ny = y + d[i][1];
		if(a[nx][ny] != 'X' && a[nx][ny] == cur && nx >= 1 && nx <= n
		        && ny >= 1 && ny <= m)
			dfs(nx, ny, a[nx][ny]);
	}
}
int main() {
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
//	freopen("out.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(0);

	while(cin >> n >> m && n != 0 && m != 0) {
		for(int i = 1; i <= n; ++i) cin >> a[i] + 1;
		int ans = 0;
		for(int i = 1; i <= n; ++i) {
			for(int j = 1; j <= m; ++j) {
				if(a[i][j] != 'X') {
					++ans;
					dfs(i, j, a[i][j]);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}