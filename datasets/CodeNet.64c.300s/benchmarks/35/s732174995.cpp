#include <iostream>
using namespace std;

int n, u, k, uk;
int G[101][101] = {0};

int main() {
	cin >> n;
	for (int i=0; i<n; ++i) {
		cin >> u >> k;
		while (k --) {
			cin >> uk;
			G[u][uk] = 1;
		}
	}
	for (int i=1; i<=n; ++i) {
		for (int j=1; j<=n; ++j) {
			cout << (j==1 ? "" : " ") << G[i][j];
		}
		cout << endl;
	}
	return 0;
}