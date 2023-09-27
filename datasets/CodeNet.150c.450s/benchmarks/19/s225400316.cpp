#include <stdio.h>
int main(void)
{
	int x, y, i;
	i=0;
	while(1)
	{
		scanf("%d %d\n", &x, &y);
		if(x==0&&y==0)
		{
			break;
		}
		else if(i==3000)
		{
			break;
		}
		i++;
		
		if(y<x)
		{
			printf("%d %d\n", y, x);
		}
		else
		{
			printf("%d %d\n", x, y);
		}
	}
	return 0;
}
