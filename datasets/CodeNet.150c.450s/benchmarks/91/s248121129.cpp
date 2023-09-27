#include <stdio.h>

const int MAX_V = 1000000;

int main() {
	int i, k, v;
	int prime[MAX_V + 1];
	int sum[MAX_V + 2];
	for (i = 2; i <= MAX_V; i++) {
		prime[i] = 1;
	}
	for (i = 2; i * i <= MAX_V; i++) {
		if (prime[i]) {
			for (k = 2 * i; k <= MAX_V; k += i) {
				prime[k] = 0;
			}
		}
	}
	sum[1] = 0;
	sum[2] = 0;
	for (i = 2; i <= MAX_V; i++) {
		sum[i + 1] = sum[i] + prime[i];
	}
	while (scanf("%d", &v) != EOF) {
		printf("%d\n", sum[v + 1]);
	}
	return 0;
}