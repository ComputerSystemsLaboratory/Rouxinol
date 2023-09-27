// AOJ ITP 1_7_B
#include<cstdio>
#define repi(i,a,b) for( int i = (a); i != (b); ++i )

int n, x, ans;

int main()
{
	while( scanf( "%d%d", &n, &x ), n|x )
	{
		ans = 0;
		repi( i, 1, n+1 ) repi( j, i+1, n+1 ) repi( k, j+1, n+1 )
			if( i+j+k == x )
				++ans;

		printf( "%d\n", ans );
	}

	return 0;
}