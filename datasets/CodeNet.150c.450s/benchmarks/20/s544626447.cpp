#include<stdio.h>
int main(void)
{
	int a,b,c,s,d;
	scanf("%d",&s);
	d=s/60;
	c=s%60;
	a=d/60;
	b=d%60;
	printf("%d:%d:%d\n",a,b,c);
	return 0;
}
	
	