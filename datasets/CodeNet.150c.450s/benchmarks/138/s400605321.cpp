#include <stdio.h>

int gcd(int x, int y) {

	if (y == 0) return x;
	if (x >= y) return gcd(y, x % y);
	else return gcd(x, y % x);
}

int main() {
	int x, y;
	scanf("%d %d", &x, &y);
	printf("%d\n", gcd(x, y));
}