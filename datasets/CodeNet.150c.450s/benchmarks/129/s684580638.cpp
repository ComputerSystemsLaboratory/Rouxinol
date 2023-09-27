#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>

using namespace std;


int main() {
	int r, c;
	int a[101][101];

	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> a[i][j];
		}
	}
	
	for (int i = 0; i < r; i++) {
		a[i][c] = 0;
		for (int j = 0; j < c; j++) {
			a[i][c] += a[i][j];
		}
	}
	for (int i = 0; i <= c; i++) {
		a[r][i] = 0;
		for (int j = 0; j < r; j++) {
			a[r][i] += a[j][i];
		}
	}
	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			cout << a[i][j];
			if (j < c) cout << ' ';
		}
		cout << endl;
	}
	cin >> r;
}