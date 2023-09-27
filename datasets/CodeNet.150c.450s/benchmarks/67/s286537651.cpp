#include <cstdio>
int n;
int main() {
	while(scanf("%d", &n), n) {
		n *= 2;
		int ret = 0;
		for(int i = 2; i * i < n; i++) {
			if(n % i == 0 && n / i % 2 != i % 2) ret++;
		}
		printf("%d\n", ret);
	}
	return 0;
}