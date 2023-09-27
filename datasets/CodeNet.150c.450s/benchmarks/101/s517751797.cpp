#include<iostream>
#include<vector>
#include<stack>
#define MAX 100000
#define NIL -1

using namespace std;

int n;
vector<int> ver[MAX];
int grp[MAX];

void dfs(int r, int c);

int main() {
	int i, j, a, b, m, q, id = 1;
	
	cin >> n >> m;

	for (i = 0; i < m; i++) {
		cin >> a >> b;
		ver[a].push_back(b);
		ver[b].push_back(a);
	}

	for (i = 0; i < n; i++)grp[i] = NIL;
	for (i = 0; i < n; i++) {
		if (grp[i] == NIL)dfs(i, id++);
	}

	cin >> q;

	for (i = 0; i < q; i++) {
		cin >> a >> b;
		if (grp[a] == grp[b])cout << "yes\n";
		else cout << "no\n";
	}
	return 0;
}

void dfs(int r, int c) {
	int i, u, v;
	stack<int> s;
	s.push(r);
	grp[r] = c;
	while (!s.empty()) {
		u = s.top();
		s.pop();
		for (i = 0; i < ver[u].size(); i++) {
			v = ver[u][i];
			if (grp[v] == NIL) {
				grp[v] = c;
				s.push(v);
			}
		}
	}
}