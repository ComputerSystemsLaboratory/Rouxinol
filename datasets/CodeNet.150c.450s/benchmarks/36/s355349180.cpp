#include <stdio.h>

int func(int x) {
	return x * x;
}

int main() {
	int d;
	int ans;
	int i;

	while(scanf("%d", &d) != EOF) {
		ans = 0;

		for(i = 0; i < 600 / d; i++)
			ans += d * func(i * d);

		printf("%d\n", ans);
	}

	return 0;
}