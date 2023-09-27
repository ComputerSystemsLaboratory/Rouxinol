#include <stdio.h>
int main(void)
{
	int a,b;
	int c,e;

	scanf("%d %d",&a,&b);

	c = a*b;
	e = a+a+b+b;

	printf("%d %d\n",c,e);

	return 0;
}