#include <iostream>

using namespace std;

int main() {
	int n, b, f, r, v, x[4][3][10] = { 0 }, i, j, k;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		x[b - 1][f - 1][r - 1] += v;
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 10; k++) {
				cout << " " << x[i][j][k];
			}
			cout << endl;
		}
		if (i != 3) {
			for (k = 0; k<20; k++)
				cout << '#';
			cout << endl;
		}
	}

}