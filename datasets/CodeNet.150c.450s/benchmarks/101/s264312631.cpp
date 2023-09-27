#include <bits/stdc++.h>

using namespace std;

#define nil -1
vector<vector<int>> makelist(int n, int m) {
	vector<vector<int>> Adjlist(n);
	int a, b;

	for(int i = 0; i < m; i++) {
		cin >> a >> b;
		Adjlist[a].push_back(b);
		Adjlist[b].push_back(a);
	}

	return Adjlist;
}

void dfs_run(int start, int id, vector<vector<int>>& adj, vector<int>& color) {
	//cout << start << endl;
	while(!adj[start].empty()) {
		int tmp;
		tmp = adj[start].back();
		adj[start].pop_back();	
		if(color[tmp] != nil) {
			continue;
		}
		color[tmp] = id;
		dfs_run(tmp, id, adj, color);
	}
}

void dfs(int n, vector<vector<int>>& adj, vector<int>& color) {
	int id = 0;
	for(int i = 0; i < n; i++) {
		if(color[i] == nil) {
			color[i] = i;
			dfs_run(i, id, adj, color);
		}
		id++;
	}
	/*for(int i = 0; i < n; i++) {
		cout << color[i] << endl;
	}*/
	
}

int main(void)
{
	int n, m, q;

	cin >> n >> m;
	vector<vector<int>> Adjlist = makelist(n, m);
	vector<int> color(n, nil);

	dfs(n, Adjlist, color);
	cin >> q;
	for(int i = 0; i < q; i++) {
		int a, b;
		cin >> a >> b;

		if(color[a] == color[b]) {
			cout << "yes" << endl;
		}else{
			cout << "no" << endl;
		}
	}

	return 0;
}
		