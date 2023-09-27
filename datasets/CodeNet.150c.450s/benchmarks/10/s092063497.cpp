#include <iostream>
#include <cstdio>

using namespace std;

int main() {
	int n;

	cin >> n;

	int num[4][3][10] = {};


	for (int i = 0; i < n; i++) {
		int b, f, r, v;
		cin >> b >> f >> r >> v;

		num[b - 1][f - 1][r - 1] += v;
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 10; k++) {
				printf(" %d", num[i][j][k]);
			}
			printf("\n");
		}
		if (i < 3) {
			printf("####################\n");
		}
	}

	return 0;
}