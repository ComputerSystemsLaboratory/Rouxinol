#include<stdio.h>
int main() {
	int n, y, m, d, i, j;
	scanf("%d", &n);
	for (i = 1; i <= n; ++i) {
		int sum = 0;
		scanf("%d %d %d", &y, &m, &d);
		if (y % 3 && m % 2==0) sum += (20 - d);
		else sum += (21 - d);
		for (j = m + 1; j <= 10; ++j) {
			if (y % 3 && j % 2==0) sum += 19;
			else sum += 20;
		}
		for (j = y + 1; j < 1000; ++j) {
			if (j % 3) sum += 195;
			else sum += 200;
		}
		printf("%d\n", sum);
	}
	return 0;
}
