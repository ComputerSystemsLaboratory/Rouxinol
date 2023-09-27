#include <bits/stdc++.h>
using namespace std;

int	main()
{
	const static int	inf = 2e+9 + 1;
	int	V, E;
	cin >> V >> E;
	int	s, t, d;
	int	dist[100][100];
	for (int i = 0; i < V; ++i) {
		for (int j = 0; j < V; ++j)
			dist[i][j] = inf;
		dist[i][i] = 0;
	}
	for (int i = 0; i < E; ++i) {
		cin >> s >> t >> d;
		dist[s][t] = d;
	}
	for	(int k = 0; k < V; ++k) {
		for (int i = 0; i < V; ++i) {
			for (int j = 0; j < V; ++j) {
				if (dist[i][k] < inf && dist[k][j] < inf)
					dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
			}
		}
	}
	bool 	has_nega_cycle = false;
	for (int i = 0; i < V; ++i) {
		if (dist[i][i] < 0) {
			has_nega_cycle = true;
			break;
		}
	}
	if (has_nega_cycle) {
		cout << "NEGATIVE CYCLE" << endl;
		return 0;
	}
	for (int i = 0; i < V; ++i) {
		for (int j = 0; j < V; ++j) {
			if (dist[i][j] < inf)
				cout << dist[i][j];
			else
				cout << "INF";
			if (j < V - 1)
				cout << " ";
			else
				cout << endl;
		}
	}
	return 0;
}


