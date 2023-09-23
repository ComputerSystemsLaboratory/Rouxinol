#include<stdio.h>

int main()
{
	int s, oh, om, os;

	scanf("%d", &s);

	oh = s / 3600;
	om = (s/60)%60;
	os = s % 60;

	printf("%d:%d:%d\n", oh, om, os);

	return 0;
}