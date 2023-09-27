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
#define INF 100000 * 100 + 1

int cost[MAX_N][MAX_N];
int d[MAX_N];
bool used[MAX_N];
int V;

void dijkstra(int s) {
	fill_n(d, V, INF);
	fill_n(used, V, false);
	d[s] = 0;

	while (1) {
		int v = -1;
		for (int u = 0; u < V; u++)
			if (!used[u] && (v == -1 || d[u] < d[v]))
				v = u;

		if (v == -1)
			break;

		used[v] = true;

		for (int u = 0; u < V; u++)
			d[u] = min(d[u], d[v] + cost[v][u]);
	}
}

int main() {
	int n;
	cin >> n;
	V = n;
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		fill_n(cost[u], n, INF);
		for (int j = 0; j < k; j++) {
			int v, c;
			cin >> v >> c;
			cost[u][v] = c;
		}
	}
	dijkstra(0);
	for (int i = 0; i < n; i++) {
		cout << i << " " << d[i] << endl;
	}
	
	return 0;
}