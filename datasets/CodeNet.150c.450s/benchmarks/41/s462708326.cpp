#include <iostream>
#include <vector>
#define INF 2147483647
using namespace std;
struct Edge {
	int to, cost;
	Edge(int to, int cost) : to(to), cost(cost) {}
};
typedef vector<vector<Edge> > P;
P graph;
vector<int> dist;
bool bellman_ford(int n, int s) {
	dist = vector<int>(n, INF);dist[s] = 0;
	for (int i = 0; i < n; i++) {
		for (int v = 0; v < n; v++) {
			for (int k = 0; k < graph[v].size(); k++) {
				Edge e = graph[v][k];
				if (dist[v] != INF && dist[e.to] > dist[v] + e.cost) {
					dist[e.to] = dist[v] + e.cost;
					if (i == n - 1) return true;
				}
			}
		}
	}
	return false;
}

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int V, E;cin >> V >> E;
	graph = P(V);
	for (int i = 0; i < E; i++) {
		int from, to, cost;cin >> from >> to >> cost;
		graph[from].push_back(Edge(to, cost));
	}
	for (int j = 0; j < V;j++) {
		if (bellman_ford(V, j)) { cout << "NEGATIVE CYCLE" << endl; return 0; }
		for (int i = 0; i < V; i++) {
			if (dist[i] != INF) { cout << dist[i]; }
			else { cout << "INF"; }
			if (i != V - 1) { cout << ' '; }
		}
		cout << endl;
	}
	return 0;
}