#include<stdio.h>

int main() {

	int n, r;
	int array[51];
	int tmp[51];
	while (1) {
		scanf("%d %d", &n, &r);
		if (n == 0 && r == 0) break;

		for (int i = 1; i <= n; i++) {
			array[i] = i;
		}
		for (int i = 0; i < r; i++) {
			int p, c;
			scanf("%d %d", &p, &c);
			for (int j = 0; j < c; j++) {
				tmp[j] = array[n - (p - 1) - j];
			}
			for (int j = 0; j < (p - 1); j++) {
				array[n - (p - 1) - c + 1 + j] = array[n - (p - 1) + 1 + j];
			}
			for (int j = 0; j < c; j++) {
				array[n - c + 1 + j] = tmp[c - 1 - j];
			}
		}
		printf("%d\n", array[n]);
	}
}