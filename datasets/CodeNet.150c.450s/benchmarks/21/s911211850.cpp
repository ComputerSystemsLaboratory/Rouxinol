#include <stdio.h>

int main(void) {

	int i, num = 1;
	int	x;

	scanf("%d", &x);

	for (i = 0; i < 3; i++) {
		num = num * x;
	}

	printf("%d\n",num);

	return 0;
}