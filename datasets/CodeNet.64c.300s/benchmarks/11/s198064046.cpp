#include<stdio.h>
int main(void)
{
	int h,m,s,a,b;
	scanf("%d",&a);
	h=a/3600;
	b=a-h*3600;
	m=b/60;
	s=b-m*60;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
}