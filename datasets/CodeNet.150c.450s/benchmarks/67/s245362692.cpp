#include <cstdio>
int n;
int main() {
	while(scanf("%d", &n), n) {
		int ret = 0;
		for(int l = 1; l <= n; l++) {
			for(int r = l + 1; r <= n; r++) {
				int sum = 0;
				for(int k = l; k <= r; k++) sum += k;
				if(sum == n) ret++;
			}
		}
		printf("%d\n", ret);
	}
}