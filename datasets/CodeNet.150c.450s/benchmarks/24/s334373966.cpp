#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	long N, M;
	while (cin >> N >> M && N != 0 || M != 0)
	{
		vector< pair<int,int> > dp(N);
		long long  ans = 0;
		for (int i = 0; i < N; i++)
		{
			cin >> dp[i].second >> dp[i].first;
			ans += dp[i].second * dp[i].first;
		}
		sort(dp.begin(), dp.end());
		reverse(dp.begin(), dp.end());

		for (int i = 0; i < N; i++)
		{
			if (M <= 0)break;
			if (M >= dp[i].second)
			{
				M -= dp[i].second;
				ans -= dp[i].second * dp[i].first;
			}
			else
			{
				ans -= M * dp[i].first;
				M = 0;
			}
		}

		cout << ans << endl;



	}
	return 0;
}