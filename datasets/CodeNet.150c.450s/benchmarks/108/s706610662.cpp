#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <climits>
#include <stack>
#include <queue>

using namespace std;

int main() {
	queue<int> Q;
	int n;
	int u, v;
	int AdjList[101][99];
	int Deg[101];
	bool Visited[101];
	int d[101];
	int i, j;
	cin >> n;
	for (i = 1; i <= n; i++) {
		d[i] = -1;
		Visited[i] = false;
		cin >> u;
		cin >> Deg[u];
		for (j = 0; j < Deg[u]; j++) {
			cin >> v;
			AdjList[u][j] = v;
		}
	}

	d[1] = 0;
	Q.push(1);
	Visited[1] = true;
	while (Q.empty() != true) {
		v = Q.front();
		Q.pop();
		for (i = 0; i < Deg[v]; i++) {
			u = AdjList[v][i];
			
			if (Visited[u] != true) {
				Visited[u] = true;
				d[u] = d[v] + 1;
				Q.push(u);
			}
		}
	}
	for (i = 1; i <= n; i++) {
		printf("%d %d\n", i, d[i]);
	}

	return 0;
}