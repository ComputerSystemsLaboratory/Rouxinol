/*
 * ALDS1_11_A.cpp
 *
 *  Created on: May 5, 2018
 *      Author: 13743
 */

#include<iostream>

using namespace std;

int main() {
	int n;
	bool adj[101][101] = {0};
	cin >> n;

	int u, k, v;
	for(int i=0; i<n; i++) {
		cin >> u >> k;
		while(k--) {
			cin >> v;
			adj[u][v] = 1;
		}
	}

	for(int i=1; i<=n; i++) {
		cout << adj[i][1];
		for(int j=2; j<=n; j++) {
			cout << " " << adj[i][j];
		}
		cout << endl;
	}
}



