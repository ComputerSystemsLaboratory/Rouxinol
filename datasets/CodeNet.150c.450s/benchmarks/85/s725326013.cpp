// ALDS 1_10_B
#include<cstdio>
#include<cstring>
#include<vector>
#define rep(i,a) for( int i = 0; i != (a); ++i )
#define repi(i,a,b) for( int i = (a); i != (b); ++i )

const int INF = 1<<28;

int n;
std::vector<int> r(100);
std::vector<std::vector<int> > dp( 100, std::vector<int>( 100, INF ) );

int main()
{
	scanf( "%d", &n );
	rep( i, n )
		scanf( "%d%d", &r[i], &r[i+1] );

	rep( i, n )
		dp[i][i] = 0;

	repi( k, 1, n ) rep( i, n-k ) repi( j, i, i+k )
		dp[i][i+k] = std::min( dp[i][i+k], dp[i][j]+dp[j+1][i+k]+r[i]*r[j+1]*r[i+k+1] );	

	printf( "%d\n", dp[0][n-1] );

	return 0;
}