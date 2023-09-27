#include<stdio.h>
int main(void)
{
	int a,h,m,s,b;
	scanf("%d",&a);
	h=a/3600;
	b=a%3600;
	m=b/60;
	s=b%60;
	printf("%d:%d:%d\n",h,m,s);
}