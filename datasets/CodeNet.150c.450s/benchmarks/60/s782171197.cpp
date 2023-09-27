#include<iostream>
using namespace std;

int main() {
	int n, u, k, x;
	int matrix[101][101] = {};

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> u >> k;
		for (int j = 0; j < k; j++) {
			cin >> x;
			matrix[u][x] = 1;
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << matrix[i][j] ;
			if (j != n)	cout << " ";
		}
		cout << endl;
	}
	return 0;
}