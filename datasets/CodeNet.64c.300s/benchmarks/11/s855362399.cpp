#include<stdio.h>
int main(void)
{
	int s, h, m, a, b;
	scanf("%d", &s);
	if (s>=3600){
		h=s/3600;
	}
	a=s%3600;
	if (a>=60){
		m=a/60;
	}
	b=a%60;
	printf("%d:%d:%d\n", h, m, b);
	return 0;
}