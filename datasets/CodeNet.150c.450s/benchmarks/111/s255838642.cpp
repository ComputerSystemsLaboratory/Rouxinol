#include<iostream>

typedef long long ll;

int N;
int a[100];
ll dp[100][21];

int main()
{
	std::cin >> N;
	for( int i = 0; i != N; ++i )
		std::cin >> a[i];

	dp[0][a[0]] = 1;

	for( int i = 0; i != N - 2; ++i )
	{
		for( int j = 0; j <= 20; ++j )
		{
			if( j + a[i+1] <= 20 )
				dp[i+1][j+a[i+1]] += dp[i][j];
			if( j - a[i+1] >= 0 )
				dp[i+1][j-a[i+1]] += dp[i][j];
		}
	}

	std::cout << dp[N - 2][a[N - 1]] << std::endl;

	return 0;
}