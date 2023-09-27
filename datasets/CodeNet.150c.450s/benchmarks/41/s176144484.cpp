#include <bits/stdc++.h>
using namespace std;

#define MAX 100
const int INF = INT_MAX;
int V, E;
long long A[MAX][MAX];

void marshallfroyd() {
	for (int k = 0; k < V; k++) {
		for (int i = 0; i < V; i++) {
			if (A[i][k] == INF)
				continue;
			for (int j = 0; j < V; j++) {
				if (A[k][j] == INF)
					continue;
				A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
			}
		}
	}
}

int main() {
	cin >> V >> E;
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			A[i][j] = ((i == j) ? 0 : INF);
		}
	}
	for (int i = 0; i < E; i++) {
		int s, t, d;
		cin >> s >> t >> d;
		A[s][t] = d;
	}
	marshallfroyd();
	for (int i = 0; i < V; i++) {
		if (A[i][i] < 0) {
			cout << "NEGATIVE CYCLE" << endl;
			return 0;
		}
	}
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V - 1; j++) {
			if (A[i][j] == INF)
				cout << "INF" << " ";
			else
				cout << A[i][j] << " ";
		}
		if (A[i][V - 1] == INF)
			cout << "INF" << endl;
		else
			cout << A[i][V - 1] << endl;
	}
	return 0;
}

