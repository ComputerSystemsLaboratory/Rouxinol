#include<iostream>
#include<vector>

int main()
{
	while (1)
	{
		int a, b;
		std::cin >> a >> b;
		if (a == 0 && b == 0)
			break;

		int n;
		std::cin >> n;

		std::vector<std::vector<int>> dp(a, std::vector<int>(b, 0));
		for (int i = 0; i != n; ++i)
		{
			int c, d;
			std::cin >> c >> d;
			dp[c - 1][d - 1] = -1;
		}

		for (int i = 0; i != a; ++i)
		{
			for (int j = 0; j != b; ++j)
			{
				if (i == 0 && j == 0)
					dp[i][j] = 1;
				else if (dp[i][j] != -1)
				{
					if (i != 0 && dp[i - 1][j] != -1){
						dp[i][j] += dp[i - 1][j];
					}
					if (j != 0 && dp[i][j - 1] != -1){
						dp[i][j] += dp[i][j - 1];
					}
				}
			}
		}

		std::cout << dp[a - 1][b - 1] << std::endl;
	}
	return 0;
}