#include<stdio.h>
int main()
{
	int W, H, x, y, r;
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	if (0 > x - r)
	{
		printf("No\n");
		return 0;
	}
	else if (W < x + r)
	{
		printf("No\n");
		return 0;
	}
	else if (0 > y - r)
	{
		printf("No\n");
		return 0;
	}
	else if (H < y + r)
	{
		printf("No\n");
		return 0;
	}
	else
	{
		printf("Yes\n");
	}
	return 0;
}