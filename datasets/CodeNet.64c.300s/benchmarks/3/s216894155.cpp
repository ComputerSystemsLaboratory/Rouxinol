#include <stdio.h>

int main(void) {
	int n, a[99];
	
	scanf("%d\n", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d ", &a[i]);
	}
	for (int i = n - 1; i > 0; i--) {
		printf("%d ", a[i]);
	}

	printf("%d\n", a[0]);
	return 0;
}