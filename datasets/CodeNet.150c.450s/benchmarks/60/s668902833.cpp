#include<iostream>
using namespace std;
bool g[114][514];
int main() {
	int n; cin >> n;
	for (int i = 0; i < n; i++) {
		int u, k; cin >> u >> k;
		for (int j = 0; j < k; j++) {
			int v; cin >> v;
			g[u][v] = true;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (j != 1)cout << ' ';
			cout << g[i][j];
		}
		cout << endl;
	}
}