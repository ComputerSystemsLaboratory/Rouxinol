#include <iostream>
using namespace std;
int main() {
	int a[6][20] = {};
	int n, b, d, e;
	char c;
	cin >> n;
	for (b = 1; b <= n; b++) {
		cin >> c >> d;
		if (c == 'S') {
			a[1][d] = 1;
		}
		if (c == 'H') {
			a[2][d] = 1;
		}
		if (c == 'C') {
			a[3][d] = 1;
		}
		if (c == 'D') {
			a[4][d] = 1;
		}
	}
	for (b = 1; b <= 13; b++) {
		if (a[1][b] == 0) {
			cout << "S " << b << endl;
		}
	}
	for (b = 1; b <= 13; b++) {
		if (a[2][b] == 0) {
			cout << "H " << b << endl;
		}
	}
	for (b = 1; b <= 13; b++) {
		if (a[3][b] == 0) {
			cout << "C " << b << endl;
		}
	}
	for (b = 1; b <= 13; b++) {
		if (a[4][b] == 0) {
			cout << "D " << b << endl;
		}
	}
	return 0;
}