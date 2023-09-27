// AOJ ITP 1_6_A
#include<cstdio>
#define rep(i,a) for( int i = 0; i != (a); ++i )

int n, a[100];

int main()
{
	scanf( "%d", &n );
	rep( i, n )
		scanf( "%d", a+i );

	for( int i = n-1; i >= 0; --i )
		printf( "%d%c", a[i], i ? ' ' : '\n' );

	return 0;
}