#include "bits/stdc++.h"
#include<unordered_map>
#include<unordered_set>
#pragma warning(disable:4996)
using namespace std;
using ld = long double;
template<class T>
using Table = vector<vector<T>>;
const ld eps=1e-9;


int main() {
	int V, E; cin >> V >> E;
	vector<vector<long long int>>edges(V, vector<long long int>(V,1e18));
	for (int i = 0; i < V; ++i)edges[i][i] = 0;
	for (int i = 0; i < E; ++i) {
		long long int a, b, c; cin >> a >> b >> c;
		edges[a][b] = min(edges[a][b], c);
	}
	bool ok = true;
	for (int l = 0; l < 2; ++l) {
		for (int k = 0; k < V; ++k) {
			for (int i = 0; i < V; ++i) {
				for (int j = 0; j < V; ++j) {
					long long int cost = edges[i][k] + edges[k][j];
					if (edges[i][j]>cost) {
						if (l == 1)ok = false;
						else {
							edges[i][j] = cost;
						}
					}
				}
			}
		}
	}
	
	if (ok) {
		for (int i = 0; i < V; ++i) {
			for (int j = 0; j < V; ++j) {
				if (edges[i][j]>1e10)cout << "INF";
				else cout << edges[i][j];

				if (j == V - 1)cout << endl;
				else cout << " ";
			}
		}
	}
	else {
		cout << "NEGATIVE CYCLE" << endl;
	}
	return 0;
}