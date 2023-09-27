#include <bits/stdc++.h>
using namespace std;
#define MAX 105

int n, G[MAX][MAX], d[MAX], f[MAX], Mytime, st[MAX];

void dfs(int r) {
	if (st[r] != 0) return;
	int nt[n + 1], i;
	for (i = 1; i <= n; i++) {
		nt[i] = 1;
	}
	stack<int> S;
	S.push(r);
	d[r] = ++Mytime;
	st[r] = 1;
	while (!S.empty()) {
		int u = S.top();
		int v;
		for (v = nt[u]; v <= n; v++) {
			nt[u] = v + 1;
			if (G[u][v] && st[v] == 0) 
				break;
		}
		if (v <= n) {
			d[v] = ++Mytime;
			st[v] = 1;
			S.push(v);
		} else {
			S.pop();
			f[u] = ++Mytime;
		}
	}
}

int main(void) {
	int i, j, u, k, v;
	for (i = 0; i < MAX; i++) {
		d[i] = 0;
		f[i] = 0;
		st[i] = 0;
		for (j = 0; j < MAX; j++) {
			G[i][j] = 0;
		}
	}
	Mytime = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> u >> k;
		for (j = 0; j < k; j++) {
			cin >> v;
			G[u][v] = 1;
		}
	}
	for (i = 1; i <= n; i++) {
		dfs(i);
	}
	dfs(1);
	for (i = 1; i <= n; i++) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}
}
