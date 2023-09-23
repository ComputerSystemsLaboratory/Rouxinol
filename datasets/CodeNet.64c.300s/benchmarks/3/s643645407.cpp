#include<stdio.h>
int main()
{
	int a,b;
	while(scanf("%d",&a)!=EOF&&a)
	{
		int b[10000]={0};
		int i,j;
		for(i=0;i<a;i++)
		{
			scanf("%d",&b[i]);
		}
		printf("%d",b[i-1]);
		for(j=i-2;j>=0;j--)
		{
			printf(" %d",b[j]);
		}
		printf("\n");
	}
	return 0;
 } 