#include<stdio.h>
int main(void)
{
	int n, i, x, y;
	long int z;

	scanf("%d", &n);
	int a;

	z = 0;
	y = -1000000;
	x = 1000000;
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a);
		if (x > a)
		{
			x = a;
		}

		if (y < a)
		{
			y = a;
		}

		z = z + a;
	}
	printf("%d %d %ld\n", x, y, z);

	return 0;
}
