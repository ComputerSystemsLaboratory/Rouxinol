#include <iostream>
using namespace std;

int main(void) {
	int sheet[101][101] = {0}, r, c, i, j, sum;
	cin >> r >> c;
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; j++) {
			cin >> sheet[i][j];
			sheet[i][c] += sheet[i][j];
			sheet[r][j] += sheet[i][j];
			sheet[r][c] += sheet[i][j];
		}
	}
	for (i = 0; i <= r; i++) {
		for (j = 0; j < c; j++) {
			cout << sheet[i][j] << ' ';
		}
		cout << sheet[i][c] << endl;
	}
	return 0;
}