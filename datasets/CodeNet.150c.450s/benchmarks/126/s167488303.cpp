#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

#define NA -1

int main()
{
	int H, W, N;

	while (true)
	{
		cin >> W >> H >> N;

		if (W == 0 && H == 0) { break; }

		vector<int> X(N);
		vector<int> Y(N);

		for (int i = 0; i < N; i++)
			cin >> X[i] >> Y[i];

		vector<vector<int> > dp(H, vector<int>(W, 0));

		for (int i = 0; i < N; i++)
			dp[Y[i] - 1][X[i] - 1] = NA;

		for (int i = 0; i < H; i++)
		{
			if (dp[i][0] == NA)
			{
				break;
			}

			dp[i][0] = 1;
		}

		for (int j = 0; j < W; j++)
		{
			if (dp[0][j] == NA)
			{
				break;
			}

			dp[0][j] = 1;
		}

		for (int i = 1; i < H; i++)
		{
			for (int j = 1; j < W; j++)
			{
				if (dp[i][j] != NA)
				{
					dp[i][j] += max(dp[i - 1][j], 0);
					dp[i][j] += max(dp[i][j - 1], 0);
				}
			}
		}

		cout << dp[H - 1][W - 1] << endl;
	}

	return 0;
}