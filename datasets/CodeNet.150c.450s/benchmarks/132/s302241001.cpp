#include<stdio.h>
int main()
{
	int n,p;
	while(scanf("%d%d",&n,&p),n)
	{
		int i,a[50]={0},m=p;
		for(i=0;a[i]-p;i=(i+1)%n)
		{
			if(m)a[i]++,m--;
			else m=a[i],a[i]=0;
		}
		printf("%d\n",i);
	}
	return 0;
}