#include<stdio.h>

int main()
{
	int x, y;
	int num = 1;
	
	while (1)
	{
	    scanf("%d%d", &x, &y);
		if (x==0 && y==0)
		{
			break;
		}
		if (x <= y)
		{
			printf("%d %d\n", x, y);
		}
		else if (x > y)
		{
			printf("%d %d\n", y, x);
		}

	}

	
	return 0;
}