#include <iostream>

using namespace std;

int main(void) {
	int r, c;
	int table[101][101];
	cin >> r >> c;
	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			if (i == r || j == c) {
				table[i][j] = 0;
			}
			else {
				cin >> table[i][j];
			}
		}
	}
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			table[i][c] += table[i][j];
			table[r][j] += table[i][j];
			table[r][c] += table[i][j];
		}
	}
	for (int i = 0; i < r+1; i++) {
		for (int j = 0; j < c+1; j++) {
			cout << table[i][j];
			if (j != c) {
				cout << " ";
			}
		}
		cout << "\n";
	}

	int ee;
	cin >> ee;
	return 0;
}