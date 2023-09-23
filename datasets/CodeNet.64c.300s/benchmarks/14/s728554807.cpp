#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, b;

	scanf("%d %d", &a, &b);

	if (a >= -1000 && b <= 1000) {
		
		if (a == b) {
			printf("a == b\n");
		}
		else if (a > b) {
			printf("a > b\n");
		}
		else {
			printf("a < b\n");
		}
	}
	return 0;
}