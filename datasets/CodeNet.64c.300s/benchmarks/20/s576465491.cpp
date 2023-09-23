#include <cstdio>
#include <iostream>

int f(int x) {
	return x * x;
}

int main() {
	int d, ans;
	while (1 == scanf("%d", &d)) {
		ans = 0;
		for (int i = 0; i * d < 600; ++i) {
			ans += d * f(i * d);
		}
		printf("%d\n", ans);
	}
	return 0;
}