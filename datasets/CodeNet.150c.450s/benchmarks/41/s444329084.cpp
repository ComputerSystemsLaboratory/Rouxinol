#include <bits/stdc++.h>
using namespace std;

using LL=long long;
const LL INF = 1'000'000'000'000'000'00;

int V, E;
vector<vector<LL>> dist;


void WarashallFloyd() {
	for (int i = 0; i < V; i++)
		for (int j = 0; j < V; j++)
			for (int k = 0; k < V; k++) {
				if (dist[j][i] == INF || dist[i][k] == INF)continue;
				dist[j][k] = min(dist[j][k], dist[j][i] + dist[i][k]);
			}
}

int main() {
	cin >> V >> E;
	dist = vector<vector<LL>>(V, vector<LL>(V, INF));
	for (int i = 0; i < V; i++)dist[i][i] = 0LL;
	for (int i = 0; i < E; i++) {
		int s, t; LL d;
		cin >> s >> t >> d;
		dist[s][t] = d;
	}

	WarashallFloyd();

	bool flag = false;
	for (int i = 0; i < V; i++)
		if (dist[i][i] < 0)flag = true;

	if (flag) {
		cout << "NEGATIVE CYCLE" << endl;
	}
	else {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				if (dist[i][j] == INF)cout << "INF";
				else cout << dist[i][j];
				cout << (j == V - 1 ? "\n" : " ");
			}
		}
	}
}
