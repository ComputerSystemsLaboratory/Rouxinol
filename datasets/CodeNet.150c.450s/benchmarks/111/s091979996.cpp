#include<cstdio>
#define rep(i,a) for(int i=0;i<(a);++i)

typedef long long ll;

const int MAX_N = 1000;

int N, A[MAX_N];
ll dp[MAX_N][21];

int main()
{
	scanf( "%d", &N );
	rep( i, N )
		scanf( "%d", A+i );

	dp[0][0] = 1;
	rep( i, N-1 ) rep( j, 21 )
	{
		if( j+A[i] <= 20 )
			dp[i+1][j+A[i]] += dp[i][j];
		if( i && j-A[i] >= 0 )
			dp[i+1][j-A[i]] += dp[i][j];
	}

	printf( "%lld\n", dp[N-1][A[N-1]] );

	return 0;
}