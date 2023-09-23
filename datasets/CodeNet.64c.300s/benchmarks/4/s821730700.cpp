#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	
	if (a < b  && b<c)
	{
		printf("Yes\n");
	}

	else
	{
		printf("No\n");
	}

	getchar();
	return 0;
}