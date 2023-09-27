#include <bits/stdc++.h>
#define INF 100000000000000000ll
#define MAX_V 1000
#define MAX_E 2000
using namespace std;

int V, E;
long long d[MAX_V][MAX_V];

bool Warshall_Floyd() {
	for (int k = 0; k < V; k++) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				if (d[i][k] != INF && d[k][j] != INF && d[i][j] > d[i][k] + d[k][j]) {
					d[i][j] = d[i][k] + d[k][j];
				}
			}
		}
	}
	for (int i = 0; i < V; i++)
		if (d[i][i] < 0) return true;
	return false;
}

int main()
{
	cin >> V >> E;
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (i == j)
				d[i][j] = 0;
			else
				d[i][j] = INF;
		}
	}
	for (int i = 0, s, t, c; i < E; i++) {
		cin >> s >> t >> c;
		d[s][t] = c;
	}

	if (!Warshall_Floyd()) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				if (d[i][j] == INF)
					cout << "INF";
				else
					cout << d[i][j];
				if (j != V - 1)
					cout << ' ';
			}
			cout << endl;
		}
	}
	else {
		cout << "NEGATIVE CYCLE" << endl;
	}
	return 0;
}