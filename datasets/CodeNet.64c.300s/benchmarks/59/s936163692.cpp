#include <stdio.h>
int q, n, c;
int main() {
	scanf("%d", &q);
	for(int i = 0; i < q; i++) {
		scanf("%d", &n);
		if(n > 1) c++;
		for(int j = 2; j * j <= n; j++) {
			if(n % j == 0) {
				c--; break;
			}
		}
	}
	printf("%d\n", c);
}