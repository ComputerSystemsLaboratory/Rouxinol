#pragma warning (disable:4996)

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char buf[256];
	int n, x;

	while (1) {
		fgets(buf, 256, stdin);
		sscanf(buf, "%d %d", &n, &x);

		//printf("n : %d\n", n);
		//printf("x : %d\n", x);

		if (n == 0 && x == 0) break;

		int ans = 0;
		for (int i = n; i > 2; i--) {
			for (int j = i - 1; j > 1; j--) {
				for (int k = j - 1; k > 0; k--) {
					if (i + j + k == x) {
						ans++;
						//printf("i:%d j:%d k:%d\n", i, j, k);
					}
				}
			}
		}

		printf("%d\n", ans);
	}

	return 0;
}