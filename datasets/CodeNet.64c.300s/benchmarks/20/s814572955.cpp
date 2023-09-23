#include <stdio.h>

int area(int d)
{
	int i, s=0;
	for(i=d; i<600; i+=d)
	{
		s+=d*i*i;
	}
	return s;
}

int main (void)
{
	int d;
	while(scanf("%d", &d)!=EOF)
	{
		printf("%d\n", area(d));
	}
	return 0;
}