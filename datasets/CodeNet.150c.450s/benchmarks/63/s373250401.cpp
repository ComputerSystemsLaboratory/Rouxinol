#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <bitset>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <climits>

using namespace std;

#define MAX_V 100000
#define MAX_E 500000
#define INF INT_MAX / 2

struct Edge { int from, to, cost; };
Edge es[MAX_E];

int d[MAX_V];
int V, E;

void shortest_path(int s) {
	fill_n(d, MAX_V, INF);
	d[s] = 0;
	while (1) {
		bool update = false;
		for (int i = 0; i < E; i++) {
			Edge e = es[i];
			if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
				d[e.to] = d[e.from] + e.cost;
				update = true;
			}
		}
		if (!update) break;
	}
}

int main() {
	int r;
	cin >> V >> E >> r;
	for (int i = 0; i < E; i++)
		cin >> es[i].from >> es[i].to >> es[i].cost;
	shortest_path(r);
	for (int i = 0; i < V; i++)
		if (d[i] == INF)
			cout << "INF" << endl;
		else
			cout << d[i] << endl;
	return 0;
}