#include <cstdio>

int main()
{
	int n;
	while (scanf("%d\n", &n) != EOF) {
		if (n == 0)
			break;
		char change[256];
		bool changed[256];
		for (int i = 0; i < 256; ++i) {
			change[i] = i;
			changed[i] = false;
		}

		for (int i = 0; i < n; ++i) {
			char a, b;
			scanf("%c %c\n", &a, &b);
			if (!changed[a]) {
				change[a] = b;
				changed[a] = true;
			}
		}

		int m;
		scanf("%d\n", &m);
		for (int i = 0; i < m; ++i) {
			char c;
			scanf("%c\n", &c);
			printf("%c", change[c]);
		}
		printf("\n");
	}
	return 0;
}