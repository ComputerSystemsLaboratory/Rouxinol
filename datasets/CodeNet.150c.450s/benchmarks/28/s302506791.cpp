#include <cstdio>

#define MAX_N 100000
#define MAX_W 10000
typedef long long llong;

int check(int *W, llong &P, int &n,int &k) {
	int i = 0;
	for (int j = 0; j < k; j++) {
		llong s = 0;
		while (s + W[i] <= P) {
			s += W[i];
			i++;
			if (i == n) return n;
		}
	}
	return i;
}

llong solve(int *W, int &n, int &k) {
	llong left = 0;
	llong right = MAX_N * MAX_W;
	llong mid = 0;
	while (right - left > 1) {
		mid = (left + right) / 2;
		int v = check(W,mid,n,k);
		if (v >= n) {
			right = mid;
		}
		else {
			left = mid;
		}
	}
	return right;
}

int main() {
	int n = 0, k = 0;
	scanf("%d%d", &n, &k);
	int W[MAX_N] = { 0 };
	for (int i = 0; i < n; i++) {
		scanf("%d", &W[i]);
	}

	llong ans = solve(W,n,k);
	printf("%lld\n", ans);
	return 0;
}