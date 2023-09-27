#include <cstdio>
int n;
int main() {
	while(scanf("%d", &n), n) {
		int ret = 0;
		for(int l = 1; l <= n; l++) {
			int sum = l;
			for(int r = l + 1; r <= n; r++) {
				sum += r;
				if(sum == n) ret++;
				if(sum > n) break;
			}
		}
		printf("%d\n", ret);
	}
}