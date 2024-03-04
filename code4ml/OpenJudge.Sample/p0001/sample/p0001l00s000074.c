#include<stdio.h>
#include<math.h>

int main()
{
	int a, b;
	int i;
	while (1)
	{
		if (scanf("%d %d", &a, &b) == EOF)
			break;

		i = 0;
		while (pow(10,i)<=a+b)
		{
			i++;
		}
		printf("%d\n", i);
	}
	return 0;
}