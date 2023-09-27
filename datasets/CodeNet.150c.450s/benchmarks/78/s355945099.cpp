// AOJ 1167
#include<cstdio>
#include<algorithm>
#include<vector>
#define rep(i,a) for( int i = 0; i != (a); ++i )

const int INF = 1<<30;

std::vector<int> tet;
std::vector<int> dp( 1000001, INF ), dpOdd( 1000001, INF );

int main()
{
	for( int i = 1; i*(i+1)*(i+2)/6 <= 1000000; ++i )
		tet.push_back( i*(i+1)*(i+2)/6 );

	dp[0] = dpOdd[0] = 0;
	rep( i, 1000001 )
	{
		rep( j, tet.size() )
		{
			if( i-tet[j] >= 0 )
			{
				dp[i] = std::min( dp[i], dp[i-tet[j]]+1 );
			
				if( tet[j]&1 )
					dpOdd[i] = std::min( dpOdd[i], dpOdd[i-tet[j]]+1 );
			}
		}
	}

	int n;
	while( scanf( "%d", &n ), n )
		printf( "%d %d\n", dp[n], dpOdd[n] );

	return 0;
}