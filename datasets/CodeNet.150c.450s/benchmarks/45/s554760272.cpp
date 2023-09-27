#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int m, n;
	long long ans = 1;
	scanf("%d %d", &m, &n);
	long long beki[31], num[31];
	beki[0] = 1;
	num[0] = m;
	for (int i = 1; i < 31; i++) {
		beki[i] = 2 * beki[i - 1];
		num[i] = num[i - 1] * num[i - 1] % 1000000007;
	}
	for (int i = 30; i >= 0; i--) {
		if (n >= beki[i]) {
			ans *= num[i];
			ans %= 1000000007;
			n -= beki[i];
		}
	}
	printf("%d\n", ans);
}
