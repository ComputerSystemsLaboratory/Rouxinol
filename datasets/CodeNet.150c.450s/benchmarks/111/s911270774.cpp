#include<cstdio>
#define rep(i,a) for(int i=0;i<(a);++i)

typedef long long ll;

ll N, D[100];
ll dp[100][21];

int main()
{
	scanf( "%lld", &N );
	rep( i, N )
		scanf( "%lld", D+i );

	dp[0][D[0]] = 1;
	rep( i, N-2 ) rep( j, 21 )
	{
		if( j+D[i+1] <= 20 )
			dp[i+1][j+D[i+1]] += dp[i][j];
		if( j-D[i+1] >= 0 )
			dp[i+1][j-D[i+1]] += dp[i][j];
	}

	printf( "%lld\n", dp[N-2][D[N-1]] );

	return 0;
}