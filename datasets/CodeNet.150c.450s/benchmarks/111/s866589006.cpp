#include<iostream>

int n;
int x;
unsigned long long dp[100][21];

int main()
{
	std::cin >> n;
	
	dp[0][0] = 1;

	for( int i = 1; i != n; ++i )
	{
		std::cin >> x;

		for( int j = 0; j <= 20; ++j )
		{
			if( j + x <= 20 )
				dp[i][j+x] += dp[i-1][j];

			if( j - x >= 0 && i != 1 )
				dp[i][j-x] += dp[i-1][j];
		}
	}

	std::cin >> x;
	std::cout << dp[n-1][x] << std::endl;

	return 0;
}