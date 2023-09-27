#include<iostream>
using namespace std;
 
int main() {
	int Adj[100][100];
	int n, u, k, v;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			Adj[i][j] = 0;
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		u--;
		for (int j = 0; j < k; j++) {
			cin >> v;
			v--;
			Adj[u][v] = 1;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j != 0) cout << " ";
			cout << Adj[i][j];
		}
		cout << endl;
	}
}
	