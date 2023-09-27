#include<iostream>
using namespace std;
int v[101][101] = { 0 };
int main() {
	int n; cin >> n;
	int u, k;
	for (int i = 1; i <= n;i++) {
		cin >> u >> k;
		for (int j = 0; j < k;j++) {
			int t; cin >> t;
			v[u][t] = 1;
		}
	}
	for (int i = 1; i <= n;i++) {
		for (int j = 1; j <= n;j++) {
			if (j != n) {
				cout << v[i][j] << ' ';
			}else{
				cout << v[i][j] << endl;
			}
		}
	}
}