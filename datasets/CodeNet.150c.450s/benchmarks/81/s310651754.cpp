#include<algorithm>
#include<iostream>

const int INF = 1 << 29;

typedef std::pair<int, int> P;

int n;

int main()
{
	while( std::cin >> n, n )
	{
		int d[10][10], v = 0;

		for( int i = 0; i != 10; ++i )
			for( int j = 0; j != 10; ++j )
				d[i][j] = i == j ? 0 : INF;

		for( int i = 0; i != n; ++i )
		{
			int a, b, c;
			std::cin >> a >> b >> c;
			d[a][b] = d[b][a] = c;
			v = std::max( v, std::max( a, b ) );
		}

		for( int k = 0; k <= v; ++k )
			for( int i = 0; i <= v; ++i )
				for( int j = 0; j <= v; ++j )
					d[i][j] = std::min( d[i][j], d[i][k] + d[k][j] );
	
		P ans( INF, INF );
		for( int i = 0; i <= v; ++i )
		{
			P sum( 0, i );
			for( int j = 0; j <= v; ++j )
				sum.first += d[i][j];

			ans = std::min( ans, sum );
		}

		std::cout << ans.second << ' ' << ans.first << std::endl;
	}

	return 0;
}