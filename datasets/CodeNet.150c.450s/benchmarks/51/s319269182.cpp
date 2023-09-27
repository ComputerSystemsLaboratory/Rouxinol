#include<stdio.h>
int main(void)
{
	int x[28],y,i;
	for(i=0;i<28;i++)
	{
		scanf("%d",&x[i]);
	}
	for(y=1;y<31;y++)
	{
		for(i=0;i<28;i++)
		{
			if(x[i]==y)
			{
			break;
			}
			else if(x[i]!=y&&i==27)
			{
				printf("%d\n",y);
			}
		}
	}
	return 0;
}
