#include <iostream>
#include <stdio.h>
using namespace std;

int main(void) {
	int r, c;
	int num[110][110];
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> num[i][j];
			num[i][c] += num[i][j];
			num[r][j] += num[i][j];
			num[r][c] += num[i][j];
		}
	}
	for (int i = 0; i < r + 1; i++) {
		for (int j = 0; j < c + 1; j++) {
			cout << num[i][j];
			if (j == c) cout << endl;
			else cout << " ";
		}
	}
	return 0;
}

