#include <bits/stdc++.h>
using namespace std;

int main(void) {
	int n, i, j;
	int u, k, v;
	cin >> n;
	int G[n+1][n+1];
	for (i = 1; i <= n; i++) {
		for (j = 0; j <= n; j++) {
			G[i][j] = 0;
		}
	}
	for (i = 0; i < n; i++) {
		cin >> u >> k;
		while (k--) {
			cin >> v;
			G[u][v] = 1;
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (j != 1) cout << " ";
			cout << G[i][j];
		}
		cout << endl;
	}
}
