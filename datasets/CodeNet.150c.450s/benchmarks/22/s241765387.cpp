#include <bits/stdc++.h>
using namespace std;

struct Edge { int to, cost; };
const int INF = 1'000'000'000;

int V, E;
vector<vector<Edge>> graph;
vector<int> dist;

bool BellmanFord(int s) {
	dist[s] = 0;
	for(int i=0; i<V; i++)
		for (int v = 0; v < V; v++)
			for (auto e : graph[v]) {
				if (dist[v] != INF && dist[e.to] > dist[v] + e.cost) {
					dist[e.to] = dist[v] + e.cost;
					if (i == V - 1)return true;
				}
			}
	return false;
}

int main() {
	int r;
	cin >> V >> E >> r;
	dist = vector<int>(V, INF);
	graph.resize(V);
	for (int i = 0; i < E; i++) {
		int s, t, d;
		cin >> s >> t >> d;
		graph[s].push_back({ t,d });
	}

	if (BellmanFord(r)) {
		cout << "NEGATIVE CYCLE" << endl;
	}
	else {
		for (auto d : dist) {
			if (d == INF)cout << "INF" << endl;
			else cout << d << endl;
		}
	}
}
