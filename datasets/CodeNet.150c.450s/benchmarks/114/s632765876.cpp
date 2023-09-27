#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <iostream>
#include <list>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <utility>
#include <queue>
#include <iomanip>
#define INF 2147483647
 
using namespace std;

#define MAX_V 101

int G[MAX_V][MAX_V];  // cost[u][v]は辺e=(u,v)のコスト(存在しない場合はINF)
int mincost[MAX_V];      // 集合Xからの辺の最小コスト
bool used[MAX_V];        // 頂点iがXに含まれているか
int V;                   // 頂点数

int prim(int n)
{
	
	V = n;

	for (int i = 0; i < V; i++) {
		mincost[i] = INF;
		used[i] = false;
	}

	int res = 0;
	mincost[0] = 0;

	while (true) {
		int v = -1;
		for (int u = 0; u < V; u++) {
			if (!used[u] && (v == -1 || mincost[u] < mincost[v])) v = u;
		}
		if (v == -1) break;
		used[v] = true;     // 頂点vをXに追加
		res += mincost[v];  // 辺のコストを加える
		for (int u = 0; u < V; u++) {
			mincost[u] = min(mincost[u], G[v][u]);
		}
	}

	return (res);
}


int main(void)
{
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> G[i][j];
			if (G[i][j] == -1) G[i][j] = INF; 
		}
	}

	cout << prim(n) << endl;


	return (0);
}