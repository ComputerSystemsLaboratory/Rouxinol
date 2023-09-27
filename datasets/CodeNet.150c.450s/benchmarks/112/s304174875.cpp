#include <stdio.h>

int main() {
	char trans[256];
	char c, c2, str[10];
	long n, m, i;

	while (scanf("%ld", &n), n) {
		for (i = 0; i < 256; ++i)
			trans[i] = i;

		for (i = 0; i < n; ++i) {
			scanf("%s", str); c = str[0];
			scanf("%s", str); c2 = str[0];
			trans[c] = c2;
		}

		scanf("%ld", &m);

		for (i = 0; i < m; ++i) {
			scanf("%s", str); c = str[0];
			printf("%c", trans[c]);
		}
		puts("");
	}

	return 0;
}