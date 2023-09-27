#include <vector>
#include <iostream>

using namespace std;

#define MAX_NUM 20

int main()
{
	int N;

	cin >> N;

	vector<int> A(N);

	vector<vector<long long> > dp(N - 1, vector<long long>(MAX_NUM + 1, 0));

	for (int i = 0; i < N; i++) { cin >> A[i]; }

	dp[0][A[0]] = 1;

	for (int i = 1; i < N - 1; i++)
	{
		for (int j = 0; j <= MAX_NUM; j++)
		{
			if (j + A[i] <= MAX_NUM)
			{
				dp[i][j] += dp[i - 1][j + A[i]];
			}

			if (j - A[i] >= 0)
			{
				dp[i][j] += dp[i - 1][j - A[i]];
			}
		}
	}

	cout << dp[N - 2][A[N - 1]] << endl;

	return 0;
}