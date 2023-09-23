#include<iostream>
using namespace std;
int main() {
	bool f[100][100];
	for (int i = 0; i < 100; i++)for (int j = 0; j < 100; j++)f[i][j] = false;
	int n, u, k, v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> v;
			f[u - 1][v - 1] = true;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (j)cout << " ";
			cout << f[i][j];
		}
		cout << endl;
	}
	return 0;
}