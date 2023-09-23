#include <iostream>
#include <cstring>

using namespace std;

int main() {
	int n, b, f, r, v, p[4][3][10];
	memset(p, 0, sizeof(p));
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> b >> f >> r >> v;
		p[b-1][f-1][r-1] += v;
	}
	for (int i = 0; i < 4; i++) {
		if (i != 0)
			cout << "####################" << endl;
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				cout << " " << p[i][j][k];
			}
			cout << endl;
		}
	}

	return 0;
}