#include<stdio.h>
int main(void)
{
	int a,b,sum,c;
	while(scanf("%d",&a)!=EOF)
	{
		scanf("%d",&b);
		sum= a+b;
		c=1;
		while(sum>=10)
		{
			sum=sum/10;
			c+=1;
		}
		printf("%d\n",c);
	}
	return 0;
}