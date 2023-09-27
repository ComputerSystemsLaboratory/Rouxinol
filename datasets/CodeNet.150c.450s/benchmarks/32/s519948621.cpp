#include <cstdio>
int n, l, r, p[222];
int main() {
	while (scanf("%d%d%d", &n, &l, &r), n | l | r) {
		for (int i = 0; i < n; i++) scanf("%d", &p[i]);
		int ret = 0, gap = -1;
		for (int i = l; i <= r; i++) {
			if (p[i - 1] - p[i] >= gap) ret = i, gap = p[i - 1] - p[i];
		}
		printf("%d\n", ret);
	}
	return 0;
}