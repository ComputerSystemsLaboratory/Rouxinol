#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;
#define MAX 100005
#define NIL -1

vector<int> V[MAX];
int color[MAX];


void search(int v, int c) {
	if (color[v] != NIL)return;
	color[v] = c;
	for (int i = 0; i < V[v].size(); i++) {
		search(V[v][i], c);
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	V->reserve(n);
	for (int i = 0; i < m; i++) {
		int s, t;
		cin >> s >> t;
		V[s].push_back(t);
		V[t].push_back(s);
	}

	int id = 1;
	for (int i = 0; i < n; i++)color[i] = NIL;
	for (int u = 0; u < n; u++) {
		if (color[u] == NIL)search(u, id++);
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		int s, t;
		cin >> s >> t;
		if (color[s] == color[t])cout << "yes\n";
		else cout << "no\n";
	}

	return 0;
}
