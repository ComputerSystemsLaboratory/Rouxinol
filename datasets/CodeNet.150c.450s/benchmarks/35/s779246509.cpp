#include <cstdio>
int main() {
	int n, i, j, s, m, a[5000];
	while (scanf("%d", &n) && n) {
		for (i = 0; i < n; i++) scanf("%d", &a[i]);
		m = -2147483647;
		for (i = 0; i < n; i++, s = 0)
			for (j = i; j < n; j++)
				if ((s += a[j]) > m) m = s;
		printf("%d\n", m);
	}
	return 0;
}