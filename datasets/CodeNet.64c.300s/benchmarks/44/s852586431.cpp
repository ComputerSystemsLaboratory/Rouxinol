#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <map>
#include <bitset>
#include <string.h>
#include <cmath>
#include <algorithm>
#define N 1000015
#define P pair<int,int>
#define ll long long
#define mk(a, b) make_pair(a, b)
#define mem(a, b) memset(a, b, sizeof(a))
using namespace std;
bool vis[10];
int dis[10];
int g[10][10];
int inf = 0x3f3f3f3f;
int n, sum;
void Dijkstra(int x) {
	mem(vis, false);
	mem(dis, inf);
	dis[x] = 0;
	// dis[1] = inf;
	for (int i = 0; i <= sum; ++i) {
		int MIN = inf, u = -1;
		for (int j = 0; j <= sum; ++j) {
			if (vis[j])	continue;
			if (dis[j] < MIN) {
				MIN = dis[j];
				u = j;
			}
		}
		if (u == -1)	return;
		vis[u] = true;
		for (int j = 0; j <= sum; ++j) {
			if (vis[j])	continue;
			if (dis[j] > g[u][j] + MIN) {
				dis[j] = g[u][j] + MIN;
			}
		}
	}
}

int main(){

	ios::sync_with_stdio(false);
	while (cin >> n, n) {
		int s, e, c;
		mem(g, inf);
		sum = -1;
		for (int i = 0; i < n; ++i) {
			cin >> s >> e >> c;
			sum = max(s, sum);
			sum = max(e, sum);
			g[s][e] = g[e][s] = min(g[s][e], c);
		}
		int ans_n, ans_v = inf;
		for (int i = 0; i <= sum; ++i) {
			Dijkstra(i);
			int sum_temp = 0;
			for (int j = 0; j <= sum; ++j) {
				if (dis[j] == inf) {
					sum_temp = inf;
					break;
				}
				sum_temp += dis[j];
			}
			if (sum_temp < ans_v) {
				ans_v = sum_temp;
				ans_n = i;
			}
		}
		cout << ans_n << " " << ans_v << endl;
	}

	return 0;
}

