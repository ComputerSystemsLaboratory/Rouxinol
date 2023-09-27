#include <stdio.h>

int main()
{
	int a;
	scanf("%d",&a);
	
	int h,m,s;
	
	h=a/3600;
	a%=3600;
	
	m=a/60;
	a%=60;
	
	s=a;
	
	printf("%d:%d:%d\n",h,m,s);
	
	return 0;

}