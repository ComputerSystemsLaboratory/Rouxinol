/*
 * ALDS1_11_C.cpp
 *
 *  Created on: May 8, 2018
 *      Author: 13743
 */

#include<iostream>
#include<queue>
#include<vector>

using namespace std;

queue<int> Q;
int d[101];

void bfs(vector<int>* a, int rt) {
	Q.push(rt);
	d[rt] = 1;
	while(!Q.empty()) {
		int u = Q.front();
		Q.pop();
		for(int &x:a[u]) {
			if(d[x] == 0) {
				Q.push(x);
				d[x] = d[u] + 1;
			}
		}

	}
}

int main() {
	int n;
	vector<int> adj[101];

	cin >> n;
	for(int i=0; i<n; i++) {
		int u, k;
		cin >> u >> k;
		while(k--) {
			int v;
			cin >> v;
			adj[u].push_back(v);
		}
	}

	bfs(adj, 1);

	for(int i=1; i<=n; i++) {
		cout << i << " " << d[i] - 1 << endl;
	}

}


