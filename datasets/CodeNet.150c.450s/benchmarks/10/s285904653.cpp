#include<iostream>
using namespace std;
int main() {
	int b, f, r, v, n, a[4][3][10];
	cin >> n;
	for (int k = 0; k < 4; k++) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 10; j++) {
				a[k][i][j] = 0;
			}
		}
	}
	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		a[b - 1][f - 1][r - 1] += v;
	}
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				cout << ' '<< a[i][j][k];
				if (k == 9) {
					cout << endl;
					if (j == 2&&i!=3) {
						for (int I = 0; I < 20; I++) {
							cout << '#';
							if (I == 19) {
								cout << endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}