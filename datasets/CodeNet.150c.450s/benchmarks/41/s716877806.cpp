#include <bits/stdc++.h>
using namespace std;

#define INF INT_MAX

using Weight = long long;
using Weights = vector<Weight>;
using Matrix = vector<Weights>;

bool WF(const Matrix &g, Matrix &dist, vector<vector<int>> &prev) {
	int V = g.size();
	dist = g;
	prev.assign(V, vector<int>(V, -1));
	for (int k = 0; k < V; ++k) {
		for (int i = 0; i < V; ++i) {
			for (int j = 0; j < V; ++j) {
				if (dist[i][k] == INF || dist[k][j] == INF) continue;
				if (dist[i][j] > dist[i][k] + dist[k][j]) {
					dist[i][j] = dist[i][k] + dist[k][j];
					prev[i][j] = k;
				}
			}
		}
	}
	for (int i = 0; i < V; ++i) if (dist[i][i] < 0) return true;
	return false;
}

void buildPath(const vector< vector<int> > &prev,
	int s, int t, vector<int> &path) {
	int u = prev[s][t];
	if (u < 0) path.push_back(s);
	else buildPath(prev, s, u, path), buildPath(prev, u, s, path);
}
vector<int> buildPath(
	const vector< vector<int> > &prev, int s, int t) {
	vector<int> path;
	buildPath(prev, s, t, path);
	path.push_back(t);
	return path;
}

int main(void) {
	int V, E;
	cin >> V >> E;
	Matrix g(V, vector<Weight>(V, INF));
	for (int i = 0; i < V; ++i) g[i][i] = 0;
	for (int i = 0; i < E; ++i) {
		long long s, t, w;
		cin >> s >> t >> w;
		g[s][t] = w;
	}

	Matrix dist;
	vector<vector<int>> prev;
	bool nc = WF(g, dist, prev);
	if (nc) {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	for (int i = 0; i < V; ++i) {
		for (int j = 0; j < V; ++j) {
			if (i == j) cout << "0";
			else if (dist[i][j] == INF) cout << "INF";
			else cout << dist[i][j];
			if (j != V - 1)cout << " ";
		}
		cout << endl;
	}
	return 0;
}
