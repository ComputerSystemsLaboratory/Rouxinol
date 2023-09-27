#include <cstdio>
#include <iostream>

using namespace std;

//4
//1 2 2 4
//2 1 4
//3 0
//4 1 3

//0 1 0 1
//0 0 0 1
//0 0 0 0
//0 0 1 0

int main() {

	int n;
	scanf("%d", &n);

	int G[n][n];
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			G[i][j] = 0;
	}

	for (int i = 0; i < n; ++i) {
		int u, k;
		scanf("%d %d", &u, &k);
		for (int j = 0; j < k; ++j) {
			int v;
			scanf("%d", &v);
			G[i][v - 1] = 1;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j)
			if (j != 0)
				cout << " " << G[i][j];
			else
				cout << G[i][j];
		cout << endl;
	}

	return 0;

}