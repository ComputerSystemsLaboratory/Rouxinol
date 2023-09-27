#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x,sum;

	scanf("%d", &x);

	if (1 <= x && x <= 100) {
		sum = x * x * x;
		printf("%d\n", sum);

	}
	return 0;
}