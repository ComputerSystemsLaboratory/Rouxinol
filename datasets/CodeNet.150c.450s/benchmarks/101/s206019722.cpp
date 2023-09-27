/*
 * ALDS1_11_D.cpp
 *
 *  Created on: May 8, 2018
 *      Author: 13743
 */

#include<iostream>
#include<vector>

using namespace std;

int visited[100000];
int la = 1;

void dfsRec(vector<int>* a, int v) {
	if(visited[v] != 0) return;
	visited[v] = la;
	for(int &x:a[v]) {
		dfsRec(a, x);
	}
}

int main() {
	int n, m;
	vector<int> adj[100000];

	cin >> n >> m;
	int u, v;
	for(int i=0; i<m; i++) {
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	for(int i=0; i<n; i++) {
		if(visited[i] == 0) {
			dfsRec(adj, i);
			la++;
		}
	}

	int q;
	cin >> q;
	while(q--) {
		cin >> u >> v;
		(visited[u]==visited[v]) ? printf("yes\n") : printf("no\n");
	}
}



