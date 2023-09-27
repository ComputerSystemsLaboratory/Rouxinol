#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int k[101][101];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> k[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		int sum = 0;
		for (int j = 0; j < m; j++){
			sum += k[i][j];
		}
		k[i][m] = sum;
	}
	for (int i = 0; i < m; i++) {
		int sum = 0;
		for (int j = 0; j < n; j++) {
			sum += k[j][i];
		}
		k[n][i] = sum;
	}
	int sum = 0;
	for (int i = 0; i < n; i++){
		sum += k[i][m];
	}
	k[n][m] = sum;
	for (int i = 0; i < n + 1; i++){
		for (int j = 0; j < m + 1; j++){
			cout << k[i][j];
			if (j == m)
				cout << endl;
			else cout << ' ';
		}
	}
	return 0;
}