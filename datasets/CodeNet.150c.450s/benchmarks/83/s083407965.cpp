#include<iostream>
#define rep(i,a) for(int i=0;i<(a);++i)

const int MAX_N = 100, MAX_W = 10000;

int N, W;
int v[MAX_N], w[MAX_N];
int dp[MAX_N+1][MAX_W+1];

int main()
{
	std::cin >> N >> W;
	rep( i, N )
		std::cin >> v[i] >> w[i];

	dp[0][0] = 0;
	rep( i, N ) rep( j, W+1 )
	{
		if( j-w[i] >= 0 )
			dp[i+1][j] = std::max( dp[i][j], dp[i][j-w[i]]+v[i] );
		else
			dp[i+1][j] = dp[i][j];
	}

	std::cout << dp[N][W] << std::endl;

	return 0;
}