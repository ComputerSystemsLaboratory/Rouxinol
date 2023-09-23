#include <iostream>
using namespace std;
int main(void) {
	int r, c, a[200][200] = {};
	cin >> r >> c;
	for (int b = 1; b <= r; b++) {
		for (int d = 1; d <= c; d++) {
			cin >> a[b][d];
			a[r + 1][d] += a[b][d];
			a[b][c + 1] += a[b][d];
		}
	}
	for (int b = 1; b <= r; b++) {
		a[r + 1][c + 1] += a[b][c + 1];
	}
	for (int b = 1; b <= r + 1; b++) {
		for (int d = 1; d <= c; d++) {
			cout << a[b][d] << " ";
		}
		cout << a[b][c + 1] << endl;
	}
	return 0;
}