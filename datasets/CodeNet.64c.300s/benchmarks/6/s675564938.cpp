// AOJ ITP 1_6_C
#include<cstdio>
#define rep(i,a) for( int i = 0; i != (a); ++i )

int room[4][3][10];

int main()
{
	int n;
	scanf( "%d", &n );
	rep( i, n )
	{
		int b, f, r, v;
		scanf( "%d%d%d%d", &b, &f, &r, &v );
		room[b-1][f-1][r-1] += v;
	}

	rep( i, 4 )
	{
		rep( j, 3 )
		{
			rep( k, 10 )
				printf( " %d", room[i][j][k] );		
			puts("");
		}
		if( i != 3 )
		{
			rep( j, 20 )
				putchar( '#' );
			puts("");
		}
	}

	return 0;
}