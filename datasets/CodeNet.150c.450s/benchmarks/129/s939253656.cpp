#include<cmath>
#include<iostream>
#include<cstdio>
#include<iomanip>
using namespace std;



int main() {
	int r, c;
	int a[101][101] = {};
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
			a[i][c] += a[i][j];
			a[r][j] += a[i][j];
			a[r][c] += a[i][j];
		}

		
	}
	for (int k = 0; k < r + 1; k++) {
		for (int h = 0; h < c + 1; h++) {
			cout << a[k][h];
			if (0 <= h&&h < c)cout << ' ';

		}
		cout << endl;
	}

	return 0;
}