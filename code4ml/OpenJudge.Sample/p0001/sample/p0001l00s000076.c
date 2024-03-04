#include<stdio.h>
int main()
{
	int a,b;
	while (scanf("%d %d",&a,&b)==2)
	{
		int sum=a+b;
		int c=0;
		while (sum>0)
		{
			sum=sum/10;
			c++;
		}
		printf("%d\n",c);
	}
	return 0;
}