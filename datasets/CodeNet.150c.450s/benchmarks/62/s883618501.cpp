// AOJ ITP1_2_C
#include<cstdio>
#include<algorithm>
#define rep(i,a) for( int i = 0; i != (a); ++i )

int main()
{
	int a[3];
	rep( i, 3 )
		scanf( "%d", a+i );

	std::sort( a, a+3 );

	rep( i, 3 )
		printf( "%d%c", a[i], i == 2 ? '\n' : ' ' );

	return 0;
}