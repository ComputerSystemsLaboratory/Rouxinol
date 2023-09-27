#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	while(1){
		int n, m; cin >> n >> m;
		if(!n && !m) break;
		vector<pair<int, int> > dp(n);
		for(int i=0; i<n; i++) cin >> dp[i].first >> dp[i].second;
		sort(dp.begin(), dp.end(), [](auto l, auto r){
			return l.second > r.second;
			});
		int ans = 0;
		for(int i=0; i<n; i++){
			if(dp[i].first <= m) m -= dp[i].first;
			else{
				ans += (dp[i].first-m) * dp[i].second;
				m = max(0, m-dp[i].first);
			}
		}
		cout << ans << endl;
	}
}
