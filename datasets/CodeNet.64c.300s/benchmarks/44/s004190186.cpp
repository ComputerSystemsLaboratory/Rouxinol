//
//  AOJ 0189 Convenient Location
//
//  Created by TaoSama on 2015-03-20
//  Copyright (c) 2015 TaoSama. All rights reserved.
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

int n, dp[15][15];

int main() {
#ifdef LOCAL
	freopen("in.txt", "r", stdin);
//	freopen("out.txt","w",stdout);
#endif
	ios_base::sync_with_stdio(0);

	while(cin >> n && n) {
		int V = 0;
		memset(dp, 0x3f, sizeof dp);
		for(int i = 1; i <= n; ++i) {
			int x, y, v; cin >> x >> y >> v;
			dp[x][y] = dp[y][x] = v;
			V = max(V, max(x, y));
		}
		for(int k = 0; k <= V; ++k)
			for(int i = 0; i <= V; ++i)
				for(int j = 0; j <= V; ++j)
					dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);

		int ans = INF, loc;
		for(int i = 0; i <= V; ++i) {
			int t = 0;
			for(int j = 0; j <= V; ++j) {
				if(i == j) continue;
				t += dp[i][j];
			}
			if(t < ans) ans = t, loc = i;
		}
		cout << loc << ' ' << ans << endl;
	}
	return 0;
}