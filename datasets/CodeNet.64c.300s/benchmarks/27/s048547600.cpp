#include <stdio.h>

int main(void) {
	int n = 0;
	int x = 1;
	int cnt;

	do {
		cnt = 0;
		if (n >=3) {
			for (int i = 1; i <= n; i++) {
				for (int j = i + 1;j <= n;j++) {
					for (int k = j + 1; k <= n; k++) {
						if (i + j + k == x) cnt++;
					}
				}
			}
			printf("%d\n", cnt);
		}
		scanf("%d %d", &n, &x);
	} while (n != 0 || x != 0);
	return 0;
}