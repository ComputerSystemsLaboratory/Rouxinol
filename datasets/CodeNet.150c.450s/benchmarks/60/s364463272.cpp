#include<iostream>
#include<list>
using namespace std;

int main(void) {
	int n, u, k, s;
	cin >> n;
	bool table[102][102] = {};

	for (int i = 0;i <= n - 1;i++) {
		cin >> u >> k;
		for (int j = 0;j <= k - 1;j++) {
			cin >> s;
			table[u-1][s-1] = 1;
		}
	}

	for (int i = 0;i <= n - 1;i++) {
		for (int j = 0;j <= n - 1;j++) {
			if (j > 0) cout << " ";
			cout << table[i][j];
		}
		cout << endl;
	}

	return 0;
}