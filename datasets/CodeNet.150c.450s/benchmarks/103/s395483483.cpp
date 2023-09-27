#include<iostream>
using namespace std;
long long a[10][10][60], x[10][60]; int n, m;
int main() {
	a[0][0][0] = 1; a[1][0][0] = 1;
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 60; k++) {
				for (int l = j + 1; l < 10; l++) {
					a[i][l][k + l] += a[i - 1][j][k];
				}
			}
		}
	}
	for (int i = 1; i < 10; i++) {
		for (int j = 0; j < 60; j++) {
			for (int k = 0; k < 10; k++) {
				x[i][j] += a[i][k][j];
			}
		}
	}
	while (true) {
		cin >> n >> m;
		if (!n) { break; }
		cout << x[n][m] << endl;
	}
}