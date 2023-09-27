#include<stdio.h>
int main()
{
	int j, m, s, e, a, b;
	scanf("%d %d %d %d", &j, &m, &s, &e);
	a = j + m + s + e;
	scanf("%d %d %d %d", &j, &m, &s, &e);
	b = j + m + s + e;
	if (a > b)
		printf("%d\n", a);
	else
		printf("%d\n", b);
	return 0;
}