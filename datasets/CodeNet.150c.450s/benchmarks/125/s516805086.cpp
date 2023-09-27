#include <iostream>
#include <stack>
using namespace std;

#define MAX 100
static const int WHITE = 0; // not visit
static const int GRAY = 1; // visited
static const int BLACK = 2; // searched

int n;
int M[MAX][MAX] = { 0 };
int color[MAX] = { WHITE };
int d[MAX], f[MAX], tt = 0;
int nt[MAX] = { 0 };

// get vertex next u
int next(int u) {
	for (int v = nt[u]; v < n; v++) {
		nt[u] = v + 1;
		if (M[u][v]) return v;
	}
	return -1;
}

void dfs_visit(int r) {
	for (int i = 0; i < n; i++) nt[i] = 0;
	stack<int> S;
	S.push(r);
	color[r] = GRAY;
	d[r] = ++tt;

	while (!S.empty()) {
		int u = S.top();
		int v = next(u);
		if (v != -1) {
			if (color[v] == WHITE) {
				color[v] = GRAY;
				d[v] = ++tt;
				S.push(v);
			}
		}
		else {
			S.pop();
			color[u] = BLACK;
			f[u] = ++tt;
		}
	}
}

void dfs() {
	for (int u = 0; u < n; u++) {
		if (color[u] == WHITE)  dfs_visit(u);
	}
	for (int i = 0; i < n; i++) {
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;
	}
	return;
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		int k, u;
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			int v;
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}

	dfs();
	return 0;

}