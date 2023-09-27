#include<stdio.h>

int main()
{
	int x[100]={0},y[100]={0},z,n,t=0,r=0;
	while(scanf("%d",&n) !=EOF)
	{
		if(n>=1)
		{
			x[t]=n;
			t++;
		}
		else if(n==0)
		{
			t--;
			y[r]=x[t];
			r++;
		}
	}
	
	for(z=0;z<r;z++)
	{
		printf("%d\n",y[z]);
	}
	return 0;
}