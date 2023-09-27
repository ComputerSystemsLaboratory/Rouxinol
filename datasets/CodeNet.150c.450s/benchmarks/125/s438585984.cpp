#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstdlib>
#include <string>
#include <iostream>
#include <climits>
#include <stack>

using namespace std;

int main() {
	stack<int> S;

	int n;
	int u, v;
	int AdjList[101][99];
	int next[101];
	int Deg[101];
	bool Visited[101];
	int d[101], f[101], time;
	int i, j;
	cin >> n;
	for (i = 1; i <= n; i++) {
		Visited[i] = false;
		next[i] = 0;
		d[i] = 0;
		cin >> u;
		cin >> Deg[u];
		for (j = 0; j < Deg[u]; j++) {
			cin >> v;
			AdjList[u][j] = v;
		}
	}

	time = 1;
	for (i = 1; i <= n; i++) {
		if (Visited[i] != true) {
			v = i;
			S.push(v);
			while (S.empty() != true) {
				v = S.top();
				if (d[v] == 0) {
					d[v] = time++;
				}
				Visited[v] = true;
				for (i = next[v]; i < Deg[v]; i++) {
					u = AdjList[v][i];
					if (Visited[u] != true) {
						S.push(u);
						break;
					}
				}
				if (i == Deg[v]) {
					S.pop();
					f[v] = time++;
				}
				else {
					next[v] = i + 1;
				}
			}
		}
	}

	for (i = 1; i <= n; i++) {
		printf("%d %d %d\n", i, d[i], f[i]);
	}

	return 0;

}