// AOJ 0189
#include<cstdio>
#include<algorithm>
#include<numeric>
#define rep(i,a) for( int i = 0; i != (a); ++i )

const int INF = 1 << 29;

int d[10][10];

int main()
{
	int n;
	while( scanf( "%d", &n ), n )
	{
		rep( i, 10 )
			rep( j, 10 )
				d[i][j] = i==j?0:INF;

		int v = 0;
		rep( i, n )
		{
			int a, b, c;
			scanf( "%d%d%d", &a, &b, &c );
			d[a][b] = d[b][a] = c;
			v = std::max( v, std::max( a, b ) );
		}

		rep( k, v+1 )
			rep( i, v+1 )
				rep( j, v+1 )
					d[i][j] = std::min( d[i][j], d[i][k]+d[k][j] );
	
		int ans = INF, id;
		rep( i, v+1 )
		{
			int s = std::accumulate( d[i], d[i]+v+1, 0 );

			if( ans > s )
				ans = s, id = i;
		}

		printf( "%d %d\n", id, ans );
	}

	return 0;
}