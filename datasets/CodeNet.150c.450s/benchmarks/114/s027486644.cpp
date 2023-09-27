#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

const int NMAX = 100;
const int AMAX = 2001;
int A[NMAX][NMAX];
int C[NMAX];
int n;

int MST(int a) {
	C[a] = 1;
	int sum, minv, mina;
	sum = 0;

	while (true) {
		minv = AMAX;
		mina = -1;
		for (int i = 0; i < n; i++) {
			if (C[i] == 0) {
				continue;
			}
			for (int j = 0; j < n; j++) {
				if (C[j] == 1 || A[i][j] == AMAX) {
					continue;
				}
				minv = min(A[i][j], minv);
				if (A[i][j] == minv) {
					mina = j;
				}
			}
		}
		if (minv == AMAX || mina == -1) {
			break;
		}
		C[mina] = 1;
		sum += minv;
	}

	return sum;
}

int main() {
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		C[i] = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
			if (A[i][j] == -1) {
				A[i][j] = AMAX;
			}
		}
	}

	printf("%d\n", MST(0));

	return 0;
}

