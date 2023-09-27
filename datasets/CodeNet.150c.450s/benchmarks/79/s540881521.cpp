#include <cstdio>
#include <cstring>

int main() {
	while (true) {
		int n, r;

		scanf("%d %d", &n, &r);

		if (n == 0) break;

		char s[50];
		char b[50];
		for (int i = 0; i < n; i++) s[i] = n - i;

		for (int i = 0; i < r; i++) {
			int p, c;
			scanf("%d %d", &p, &c);

			memmove(b, s + p - 1, c);
			memmove(s + c, s, p - 1);
			memmove(s, b, c);
		}

		printf("%d\n", s[0]);
	}

	return 0;
}