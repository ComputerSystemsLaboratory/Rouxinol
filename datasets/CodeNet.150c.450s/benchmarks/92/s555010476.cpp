#include<stdio.h>

int main()
{
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF)
	{
		int digit = 1;
		int result = a + b;
		while(result >= 10)
		{
			result/=10;
			digit++;
		}
		printf("%d\n", digit);
	}

	return 0;
}