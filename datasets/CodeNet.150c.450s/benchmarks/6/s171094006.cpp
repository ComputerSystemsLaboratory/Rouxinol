// AOJ ITP1_2_B
#include<cstdio>

int main()
{
	int a, b, c;
	scanf( "%d%d%d", &a, &b, &c );

	puts( a < b && b < c ? "Yes" : "No" );

	return 0;
}