#include<iostream>
#include<vector>
using namespace std;

static const int MAX = 100000;
static const int NIL = -1;

int n;
vector<int> G[MAX];
int color[MAX];

void dfs(int r, int col) {
	color[r] = col;
	for (int i = 0; i < G[r].size(); i++) {
		int v = G[r][i];
		if (color[v] == NIL) {
			dfs(v, col);
		}
	}
}

void assignColor() {
	int col = 0;
	for (int i = 0; i < n; i++) {
		color[i] = NIL;
	}
	for (int i = 0; i < n; i++) {
		if (color[i] == NIL) {
			dfs(i, col++);
		}
	}
}

int main() {
	int m, q, f, s;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> f >> s;
		G[f].push_back(s);
		G[s].push_back(f);
	}

	assignColor();

	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> f >> s;
		if (color[f] == color[s]) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	
	return 0;
}