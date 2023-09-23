#include <stdio.h>

int main() {	
	int d;
	while(~scanf("%d", &d)) {
		int ans = 0;
		for(int i = 1; d * i <= 600; ++i) {
			ans += d * d * d * (i - 1) * (i - 1);
		}
		printf("%d\n", ans);
	}
	return 0;
} 