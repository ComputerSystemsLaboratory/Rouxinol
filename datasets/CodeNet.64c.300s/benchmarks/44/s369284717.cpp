// AOJ 0189 (http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0189)
#include<cstdio>
#include<algorithm>
#include<numeric>
#include<limits>
#define rep(i,a) for(int i=0;i<(a);++i)

typedef std::pair<int, int> P;

const int MAX_N = 10, INF = std::numeric_limits<int>::max()>>4;

int d[MAX_N][MAX_N];

int main()
{
	int n;
	while( scanf( "%d", &n ), n )
	{
		rep( i, MAX_N ) rep( j, MAX_N )
			d[i][j] = i==j?0:INF;

		rep( i, n )
		{
			int a, b, c;
			scanf( "%d%d%d", &a, &b, &c );
			d[a][b] = d[b][a] = c;
		}

		rep( k, MAX_N ) rep( i, MAX_N ) rep( j, MAX_N )
			d[i][j] = std::min( d[i][j], d[i][k]+d[k][j] );

		P ans( INF, INF );
		rep( i, MAX_N )
		{
			int s = 0;
			rep( j, MAX_N ) if( d[i][j] != INF )
				s += d[i][j];

			if( s )
				ans = std::min( ans, P( s, i ) );
		}

		printf( "%d %d\n", ans.second, ans.first );
	}

	return 0;
}