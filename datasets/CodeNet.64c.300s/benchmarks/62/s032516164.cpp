// AOJ ITP 1_6_D
#include<cstdio>
#define rep(i,a) for( int i = 0; i != (a); ++i )

int a[100][100], b[100];

int main()
{
	int n, m;
	scanf( "%d%d", &n, &m );
	rep( i, n )
		rep( j, m )
			scanf( "%d", &a[i][j] );

	rep( i, m )
		scanf( "%d", b+i );

	rep( i, n )
	{
		int c = 0;
		rep( j, m )
			c += a[i][j]*b[j];
		printf( "%d\n", c );
	}

	return 0;
}