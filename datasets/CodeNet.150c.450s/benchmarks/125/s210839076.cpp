/*
 * ALDS1_11_B.cpp
 *
 *  Created on: May 5, 2018
 *      Author: 13743
 */

#include<iostream>
#include<vector>
#include<stack>

using namespace std;

int d[101];
int f[101];
int nowTime;

stack<int> st;

void dfsRec(vector<int>* a, int v) {
	if(d[v] > 0) return;
	nowTime++;
	d[v] = nowTime;
	for(int &x:a[v]) {
		dfsRec(a, x);
	}
	nowTime++;
	f[v] = nowTime;
}

void dfsStack(vector<int>* a, int rt) {
	st.push(rt);
	while(!st.empty()) {
		int v = st.top();
		if(d[v] == 0) d[v] = ++nowTime;
		bool found = false;
		for(int &x:a[v]) {
			if(d[x] == 0) {
				st.push(x); found = true; break;
			}
		}
		if(!found) {
			st.pop();
			f[v] = ++nowTime;
		}
	}
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
		if(d[i] ==0) dfsStack(adj, i);
	}

//	for(int i=1; i<=n; i++) {
//		if(d[i] ==0) dfsRec(adj, i);
//	}

	for(int i=1; i<=n; i++) {
		cout << i << " " << d[i] << " " << f[i] << endl;
	}
}



