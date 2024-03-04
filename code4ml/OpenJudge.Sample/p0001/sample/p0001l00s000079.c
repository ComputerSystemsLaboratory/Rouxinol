#include <stdio.h>

int count_digit(int n) {
	int count = 0;

	while(n != 0) {
		n /= 10;
		count++;
	}

	return count;
}

int main() {
	int a, b;

	while(scanf("%d %d", &a, &b) != EOF) {
		printf("%d\n", count_digit(a + b));
	}

	return 0;
}