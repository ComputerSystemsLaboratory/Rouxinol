#include <iostream>
using namespace std;

int main() {
	int r, c, table[101][101] = { 0 }, sum, all_sum = 0;
	cin >> r >> c;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			cin >> table[i][j];
			all_sum += table[i][j];
		}
	}
	for (int i = 0; i < r; i++) {
		sum = 0;
		for (int j = 0; j < c; j++) {
			sum += table[i][j];
		}
		table[i][c] += sum;
	}
	for (int j = 0; j < c; j++) {
		sum = 0;
		for (int i = 0; i < r; i++) {
			sum += table[i][j];
		}
		table[r][j] += sum;
	}
	table[r][c] = all_sum;
	for (int i = 0; i <= r; i++) {
		for (int j = 0; j <= c; j++) {
			cout << table[i][j];
			if (j < c) cout << ' ';
		}
		cout << endl;
	}
}