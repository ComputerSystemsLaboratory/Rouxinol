#include<stdio.h>

int main()
{
	int height[10], i;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &height[i]);
	}
	int n1 = 0, n2 = 0, n3 = 0, l, m, s;
	for (i = 0; i < 10; i++)
	{
		if (n1 < height[i])
		{
			n1 = height[i];
			l = i;
		}
	}
	for (i = 0; i < 10; i++)
	{
		if ((n2 < height[i]) && (i != l))
		{
			n2 = height[i];
			m = i;
		}
	}
	for (i = 0; i < 10; i++)
	{
		if ((n3 < height[i]) && (i != l) && (i != m))
		{
			n3 = height[i];
			s = i;
		}
	}
	printf("%d\n%d\n%d\n", n1, n2, n3);
	return 0;
}