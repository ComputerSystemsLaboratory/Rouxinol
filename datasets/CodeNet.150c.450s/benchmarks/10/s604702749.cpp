#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int university[4][3][10] = { 0 }, n, a, b, c, d;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b >> c >> d;
		university[a - 1][b - 1][c - 1] += d;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				cout << " " << university[i][j][k];
			}
			cout << endl;
		}
		if (i < 3) puts("####################");
	}
}