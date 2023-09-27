#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

int main() {
	int n;
	cin >> n;
	int G[100][100];
	for (int i = 0; i < 100; ++i)
		fill_n(G[i], 100, 0);
	int u, k, v;
	for (int i = 0; i < n; ++i) {
		cin >> u >> k;
		for (int j = 0; j < k; ++j) {
			cin >> v;
			G[i][v-1] = 1;
		}
	}
	for (int i = 0; i < n; ++i) {
		int ifs = 0;
		for (int j = 0; j < n; ++j) {
			if (ifs == 1)
				cout << " ";
			cout << G[i][j];
			ifs = 1;
		}
		cout << endl;
	}

	return 0;
}