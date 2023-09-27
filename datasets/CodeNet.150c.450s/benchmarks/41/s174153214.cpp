#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

static const int MAX = 100;
#define INF 2000000000000ll
int V, E;
long long dp[MAX][MAX];

void Warshall_Floyd() {
	for (int k = 0; k < V; k++) {
		for (int i = 0; i < V; i++) {
			for (int j =0 ; j < V; j++) {
				if (dp[i][k] == INF || dp[k][j] == INF) {
					continue;
				}
				dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
			}
		}
	}
}


int main() {
	cin >> V >> E;
	for (int i = 0; i < V; i++) {
		for (int j = 0; j < V; j++) {
			if (i == j) {
				dp[i][j] = 0;
			}
			else {
				dp[i][j] = INF;
			}
		}
	}
	for (int i = 0; i < E; i++) {
		int from, to, cost;
		cin >> from >> to >> cost;
		dp[from][to] = cost;
	}
	Warshall_Floyd();
	bool minus = false;
	for (int i = 0; i < V; i++) {
		if (dp[i][i] < 0) {
			minus = true;
		}
	}

	if (minus) {
		cout << "NEGATIVE CYCLE" << endl;
	}
	else {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				if (j != 0) {
					cout << " ";
				}
				if (dp[i][j] == INF) {
					cout << "INF";
				}
				else {
					cout << dp[i][j];
				}
			}
			cout << endl;
		}
	}
	return 0;
}








