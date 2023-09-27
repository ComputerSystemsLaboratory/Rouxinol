#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>

#define rep(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

bool cmp(pair<int, int> &x, pair<int, int> &y)
{
	return x.second > y.second;
}

int main(void)
{
	int n, m;
	while(cin >> n >> m, n > 0){
		int j = 0, ans = 0;
		vector<pair<int, int>> dp(n);
		rep(i, n){
			int d, p;
			cin >> d >> p;
			dp[i] = make_pair(d, p);
		}
		sort(dp.begin(), dp.end(), cmp);
		while(m > 0){
			if (dp[j].first > 0){
				dp[j].first--;
				m--;
			}else{
				j++;
				if (j == n) break;
			}
		}
		rep(i, n){
			ans += dp[i].first * dp[i].second;
		}
		cout << ans << endl;
	}
	return 0;
}
