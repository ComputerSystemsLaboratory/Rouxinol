#include <iostream>
#include <vector>
#include <stack>
#include <string>
#include <string.h>
#include <set>
#include <map>

using namespace std;
vector< vector<int> > v(100001);
int n, m;
int f[100001] = {0};
int r = 0;

void dfs(int a) {
	if (f[a] == 0) { f[a] = r; }
	else { return; }
	for (int i = 0;i < v[a].size();i++) {
		if (f[v[a][i]] == 0) { dfs(v[a][i]); }
	}
}

int main() {
	cin >> n >> m;
	for (int i = 0;i < m; i++) {
		int a, b; cin >> a >> b;
		v[a].push_back(b);
		v[b].push_back(a);
	}	

	for (int i = 0; i < n;i++) {
		if (f[i] == 0) { r++; }
		dfs(i);
	}

	int q; cin >> q;
	vector<string> Ans(q);
	for (int i = 0; i < q; i++) {
		int s, t; cin >> s >> t;
		if (f[s] == f[t]) { Ans[i] = "yes"; }
		else { Ans[i] = "no";}
	
	}
	for (int i = 0; i < q;i++) { cout << Ans[i] << endl; }
	return 0;
}