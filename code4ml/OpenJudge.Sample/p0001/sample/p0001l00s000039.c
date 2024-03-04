#include <stdio.h>

int main(void)
{
	int a=0,b=0,c=0,n=0;
	for(n=1;n<201;n++)
	{
		if( -1 == scanf("%d %d",&a,&b) )
		{
			break ;
		}
	c=a+b ;
	if(c<100)
	{
		printf("2\n");
	}
	else if(c<1000)
	{
		printf("3\n");
	}
	else if(c<10000)
	{
		printf("4\n");
	}
	else if(c<100000)
	{
		printf("5\n");
	}
	else if(c<1000000)
	{
		printf("6\n");
	}
	}
	return 0 ;
}