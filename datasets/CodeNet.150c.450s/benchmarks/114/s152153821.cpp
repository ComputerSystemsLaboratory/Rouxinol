#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

#define MAX_N 100

int G[MAX_N][MAX_N];

int mincost[MAX_N];
bool used[MAX_N];
int V;
int prim() {
	for (int i = 0; i < V; i++) {
		mincost[i] = INT_MAX;
		used[i] = false;
	}
	mincost[0] = 0;
	int res = 0;

	while (1) {
		int v = -1;
		for (int u = 0; u < V; u++)
			if (!used[u] && (v == -1 || mincost[u] < mincost[v]) )
				v = u;

		if (v == -1)
			break;
		used[v] = true;
		res += mincost[v];

		for (int u = 0; u < V; u++)
			mincost[u] = min(mincost[u], G[v][u]);
	}
	return res;
}

int main() {
	int n, c;
	cin >> n;
	V = n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> c;
			if (c == -1) c = INT_MAX;
			G[i][j] = c;
		}

	cout << prim() << endl;
	return 0;
}