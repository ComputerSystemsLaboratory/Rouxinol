#include <iostream>
using namespace std;

int main() {

	int n, b, f, r, v,tenant[4][3][10];
	
	cin >> n;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				tenant[i][j][k] = 0;
			}
		}
	}

	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		tenant[b - 1][f - 1][r - 1] += v;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				cout << " " << tenant[i][j][k];
			}
			cout << "\n";
		}
		if(i!=3)cout << "####################\n";
	}

	return 0;
}