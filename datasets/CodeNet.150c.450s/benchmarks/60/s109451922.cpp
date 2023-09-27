#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	
	int i, j, n, u, k, v, maxu, a[102][102] = {};
	
	cin >> n;
	maxu = 0;
	for (i = 0; i < n; i++) {
		cin >> u >> k;
		for (j = 0; j < k; j++) {
			cin >> v;
			a[u][v] = 1;
			maxu = max(maxu, u);
		}
	}

	for (i = 1; i <= maxu; i++) {
		for (j = 1; j <= maxu; j++) {
			if (j != 1)cout << " ";
			cout << a[i][j];
		}
		cout << endl;
	}
}