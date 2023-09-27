#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll INF = 1e18;

template <typename C>
bool warshall_floyd(vector<vector<C>>& G) {
	int n = G.size();
	for (int k = 0; k < n; k++) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (G[i][k] == INF || G[k][j] == INF || G[i][j] <= G[i][k] + G[k][j]) continue;
				G[i][j] = G[i][k] + G[k][j];
			}
		}
	}
	for (int i = 0; i < n; i++) if (G[i][i] < C()) return true;
	return false;
}

template <typename C>
void add_edge(vector<vector<C>>& G, int s, int t, C c) {
	G[s][t] = min(G[s][t], c);
}

int main()
{
	ios::sync_with_stdio(false), cin.tie(0);
	int V, E;
	cin >> V >> E;
	vector<vector<ll>> G(V, vector<ll>(V, INF));
	for (int i = 0; i < V; i++) G[i][i] = 0;
	for (int i = 0; i < E; i++) {
		int s, t;
		ll d;
		cin >> s >> t >> d;
		add_edge(G, s, t, d);
	}
	if (warshall_floyd(G)) {
		puts("NEGATIVE CYCLE");
	}
	else {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				if (G[i][j] == INF) {
					printf("INF%c", " \n"[j + 1 == V]);
				}
				else {
					printf("%lld%c", G[i][j], " \n"[j + 1 == V]);
				}
			}
		}
	}
	return 0;
}