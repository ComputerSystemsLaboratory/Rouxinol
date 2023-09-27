#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	// ------ 1. Initialize, Input ------ //

	int N, W;

	cin >> N >> W;

	vector<int> v(N);
	vector<int> w(N);
	vector<vector<int> > dp(N + 1, vector<int>(W + 1, 0));

	for (vector<int>::size_type i = 0; i < N; i++)
	{
		cin >> v[i] >> w[i];
	}


	// ------ 2. DP Calculate ( dp[i][j] = max(dp[i - 1][j - w[i - 1]] + v[i - 1], dp[i - 1][j]) )------ //

	for (int i = 1; i <= N; ++i)
	{
		for (int j = 0; j <= W; ++j)
		{
			if (j - w[i - 1] >= 0)
			{
				dp[i][j] = max(dp[i - 1][j - w[i - 1]] + v[i - 1], dp[i - 1][j]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	
	// ------ 3. Output ------ //

	cout << dp[N][W] << endl;

	return 0;
}

// Time : O( NW )