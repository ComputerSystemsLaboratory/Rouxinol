#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;


typedef long long int64;


int main()
{
	while(true) {

		int n, m;
		int64 ans = 0;
		vector<pair<int, int> > dp;

		scanf("%d%d", &n, &m);
		if(n == 0)
			break;
		dp.resize(n);
		for(int i = 0; i < n; ++i)
			scanf("%d%d", &dp[i].second, &dp[i].first);

		sort(dp.rbegin(), dp.rend());

		for(int pos = 0; pos < n; ++pos) {

			int d = dp[pos].second;
			int p = dp[pos].first;

			int x = min(d, m);

			m -= x;
			ans += (d - x) * (int64)p;
		}

		printf("%lld\n", ans);
	}

	return 0;
}