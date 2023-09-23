#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

#define rep(i, n) for (int i = 0; i < n; i++)

int a, b;
char k[23][23];//0:?????????
int memo[23][23];

int dp(int x, int y) {
	if (x == 1 && y == 1) return 1;
	if (k[x][y]) return 0;
	if (memo[x][y] != -1) return memo[x][y];
	if (x == 1) return memo[x][y] = dp(x, y - 1);
	if (y == 1) return memo[x][y] = dp(x - 1, y);
	return memo[x][y] = dp(x, y - 1) + dp(x - 1, y);
}

int main() {
	for (;;) {
		scanf("%d %d", &a, &b);
		if (!a && !b) break;
		memset(k, 0, sizeof(k));
		memset(memo, 0xFF, sizeof(memo));
		int n;
		scanf("%d", &n);
		rep(i, n) {
			int x, y;
			scanf("%d %d", &x, &y);
			k[x][y] = 1;
		}
		printf("%d\n", dp(a, b));
	}
	return 0;
}