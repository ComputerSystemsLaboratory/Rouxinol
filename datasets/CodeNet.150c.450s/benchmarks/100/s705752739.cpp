#include <stdio.h>

int main()
{
	int n;
	long x;

	x = 1;

	scanf("%d", &n);

	for (int i = 1; i <= n; i++){
		x *= i;
	}

	printf("%ld\n", x);

	return 0;
}