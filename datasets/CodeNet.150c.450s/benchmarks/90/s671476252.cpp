#include<stdio.h>

int main()
{
	int a[100]={0},x=0,b[100]={0},max=0;
	while(scanf("%d",&a[x])!=EOF)
	{
		if(a[x]<=0||a[x]>100)
		{
			x--;
		}
		else
		{
			b[(a[x]-1)]++;
		}
		x++;
	}

	for(int n=0;n<100;n++)
	{
		if(max<b[n])
		{
			max=b[n];
		}
	}
	for(int n=0;n<100;n++)
	{
		if(max==b[n])
		{
			printf("%d\n",n+1);
		}
	}
	return 0;
}