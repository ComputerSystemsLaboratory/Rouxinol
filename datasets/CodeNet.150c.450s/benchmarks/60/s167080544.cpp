#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<bool>> adjacent(n, vector<bool>(n,false));

	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v;
			cin >> v;
			adjacent[u-1][v - 1] = true;
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << adjacent[i][j] << (j == n-1 ? "\n" : " ");
		}
	}

}