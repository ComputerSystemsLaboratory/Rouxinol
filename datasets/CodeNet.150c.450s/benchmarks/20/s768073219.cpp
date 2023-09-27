#include <stdio.h>

int main()
{
	int S=0,h=0,m=0,s=0;

	scanf("%d",&S);

	h = S / 3600;
	m = ( S % 3600 ) / 60;
	s = ( S % 3600 ) % 60;

	printf("%d:%d:%d\n",h,m,s);

	return 0;
}