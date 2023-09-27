#include <cstdio>

#define MAX_N 20

int A[MAX_N] = { 0 };

bool solve(const int &i, const int &M, const int &n) {
	if (M == 0) {
		return true;
	}
	else if (i >= n) {
		return false;
	}
	bool res = solve(i + 1, M, n) || solve(i + 1, M - A[i], n);
	return res;
}

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	int q;
	scanf("%d", &q);
	for (int i = 0; i < q; i++) {
		int M;
		scanf("%d", &M);
		if (solve(0,M,n)) {
			printf("yes\n");
		}
		else {
			printf("no\n");
		}
	}
	return 0;
}