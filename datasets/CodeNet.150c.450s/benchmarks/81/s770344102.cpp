#include<iostream>
#include<algorithm>
#include<queue>
#include<string.h>
using namespace std;

const int MAX_V = 100, INF = 999999;
static int cost[MAX_V][MAX_V];
static int d[MAX_V];

bool used[MAX_V];
static int V;
int E;
void dijkstra(int s) {
	fill(d, d + V, INF);
	fill(used, used + V, false);
	d[s] = 0;

	while (true) {
		int v = -1;
		for (int u = 0; u < V; u++) {
			if (!used[u] && (v == -1 || d[u] < d[v])) v = u;
		}
		if (v == -1) break;
		used[v] = true;

		for (int u = 0; u < V; u++) {
			d[u] = min(d[u], d[v] + cost[v][u]);
		}
	}
}

int main() {
	while (1) {
		memset(cost, 999999, sizeof(cost));
		cin >> E;
		if (E == 0) break;
		int v_max = -1;
		for (int i=0 ; i < E; i++) {
			int u, v, cos;
			cin >> u >> v >> cos;
			cost[u][v] = cos;
			cost[v][u] = cos;
			if (v > v_max)v_max = v;
		}
		V = v_max + 1;
		int sum_m = 999999, m_ind = -1;
		for (int i = 0; i < V; i++) {
			dijkstra(i);
			int sum = 0;
			for (int j = 0; j < V; j++) {
				sum += d[j];
			}
			if (sum < sum_m) {
				sum_m = sum;
				m_ind = i;
			}
		}

		cout << m_ind << " " << sum_m << endl;
	}
	return 0;
}