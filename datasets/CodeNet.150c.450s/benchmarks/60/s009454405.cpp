#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<vector<int> > G(n, vector<int>(n, 0));
	for (int i = 0; i < n; i++) {
		int u, k;
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v_j;
			cin >> v_j;
			G[u - 1][v_j - 1] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << G[i][j] << (j == n - 1 ? "\n" : " ");
		}
	}
}