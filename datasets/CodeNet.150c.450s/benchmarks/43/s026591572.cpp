#include<cstdio>
int main() {
	int n, i, a, b, asum, bsum;
	while (scanf("%d", &n) != EOF) {
		if (n == 0)break;
		asum = 0;
		bsum = 0;
		for (i = 0; i < n; i++) {
			scanf("%d%d", &a, &b);
			if (a < b) bsum += a + b;
			else if (a > b)asum += a + b;
			else {
				asum += a;
				bsum += b;
			}
		}
		printf("%d %d\n", asum, bsum);
	}
	return 0;
}
