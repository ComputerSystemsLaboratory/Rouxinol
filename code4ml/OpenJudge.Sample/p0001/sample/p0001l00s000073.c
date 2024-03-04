#include <stdio.h>

int main(void)
{
	int a, b;
	int digit;

	while ((scanf("%d %d", &a, &b)) != EOF){
		int sum = a + b;
		for (digit = 1; sum >= 10; sum /= 10){
			digit++;
		}

		printf("%d\n", digit);
	}

	return 0;
}
