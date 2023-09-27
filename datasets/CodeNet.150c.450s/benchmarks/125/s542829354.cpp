/*
 * ALDS1_11_B.cpp
 *
 *  Created on: May 5, 2018
 *      Author: 13743
 */

#include<iostream>
#include<vector>

using namespace std;

int d[101];
int f[101];
int nowTime;

void dfsRec(vector<int>* a, int n, int v) {
	if(d[v] > 0) return;
	nowTime++;
	d[v] = nowTime;
	for(int &x:a[v]) {
		dfsRec(a, n, x);
	}
	nowTime++;
	f[v] = nowTime;
}

int main() {
	int n;
	vector<int> adj[101];

	cin >> n;
	for(int i=0; i<n; i++) {
		int v;
		int k;
		cin >> v >> k;
		for(int j=0; j<k; j++) {
			int u;
			cin >> u;
			adj[v].push_back(u);
		}
	}

	for(int i=1; i<=n; i++) {
		if(d[i] ==0) dfsRec(adj, n, i);
	}

	for(int i=1; i<=n; i++) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}
}



