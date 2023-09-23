// AOJ ITP 1_4_C
#include<cstdio>

int main()
{
	int a, b;
	char op[2];
	while( scanf( "%d%s%d", &a, op, &b ), *op != '?' )
		printf( "%d\n", *op=='+' ? a+b : *op=='-' ? a-b : *op=='*' ? a*b : a/b );

	return 0;
}