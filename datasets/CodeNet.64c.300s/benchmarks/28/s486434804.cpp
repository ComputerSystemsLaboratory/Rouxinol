#include <stdio.h>

int main(void)
{
	int W,H,x,y,r;
	
	scanf("%d %d %d %d %d ",&W,&H,&x,&y,&r);
	
	if(x+r>W||r>x)
	{
	printf("No\n");
	}
	
	else if(y+r>H||r>y)
	{
	printf("No\n");
	}
	else
	{
	printf("Yes\n");
	}
	
	return 0;
}
