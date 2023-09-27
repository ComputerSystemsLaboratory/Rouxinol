#include<stdio.h>
int main(void)
{
    int S, h, m, s, a, b;
	
	scanf("%d",&S);
	b=S/60;
	s=S%60;
	
	h=b/60;
	m=b%60;
	printf("%d:%d:%d\n",h,m,s);
	return 0;
	
}