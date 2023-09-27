#include<stdio.h>

int main()
{
	int i = -1;
	int num = 1;
	
	while (1)
	{
	    scanf("%d", &i);
		if (i == 0)
		{
			break;
		}
		printf("Case %d: %d\n", num, i);
		num++;
	}

	
	return 0;
}