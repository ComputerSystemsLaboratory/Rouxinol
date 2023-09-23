#include<stdio.h>

int main() {
	int n, x, c = 0;
	while (scanf("%d %d", &n, &x) && (n != 0 || x != 0)) {
		for (int i = 1; i <= n; i++) {
			for (int j = i + 1; j <= n; j++) {
				for (int k = j + 1; k <= n; k++) {
					if (i + j + k == x) c++;
				}
			}
		}
		printf("%d\n", c);
		c = 0;
	}
	return 0;
}


