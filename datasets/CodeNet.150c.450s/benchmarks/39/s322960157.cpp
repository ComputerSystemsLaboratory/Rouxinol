#include<stdio.h>
int main(void)
{
	int a, b, menseki, syuu;
	scanf("%d %d", &a, &b);
	menseki = a * b;
	syuu = a * 2 + b * 2;
	printf("%d %d\n", menseki, syuu);
	return 0;
}