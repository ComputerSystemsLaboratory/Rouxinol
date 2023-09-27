#include <bits/stdc++.h>
#define INF 1000000000
#define MAX_V 1000
#define MAX_E 2000
using namespace std;

struct edge { int from, to, cost; };
int V, E, r;
int d[MAX_V];

edge es[MAX_E];

bool Bellman_Ford(int start) {
	fill(d, d + V, INF);
	d[start] = 0;
	bool update;
	for (int i = 0; i < V; i++) {
		update = false;
		for (int j = 0; j < E; j++) {
			edge e = es[j];
			if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if (!update) return false;
	}
	return true;
}

int main()
{
	int r;
	cin >> V >> E >> r;
	for (int i = 0; i < E; i++)
		cin >> es[i].from >> es[i].to >> es[i].cost;

	if (!Bellman_Ford(r)) {
		for (int i = 0; i < V; i++) {
			if (d[i] == INF)
				cout << "INF" << endl;
			else
				cout << d[i] << endl;
		}
	}
	else {
		cout << "NEGATIVE CYCLE" << endl;
	}
	return 0;
}