#include <iostream>
using namespace std;

int main(void) {
	int a[4][3][10] = {0};
	int n, b, f, r, v, i, j, k;
	cin >> n;
	while (n--) {
		cin >> b >> f >> r >> v;
		a[b-1][f-1][r-1] += v;
	}
	for (i = 0; i < 4; i++) {
		if (i)
			cout << "####################" << endl;
		for (j = 0; j < 3; j++) {
			for (k = 0; k < 10; k++) {
				cout << ' ' << a[i][j][k];
			}
			cout << endl;
		}
	}
	return 0;
}