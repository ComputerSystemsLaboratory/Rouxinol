#include <iostream>
#include <limits>
#include <vector>

using namespace std;

int main(){
	int n;
	vector<int> dp(200000),r(200000);
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> r[i];
		dp[i] = r[i];
	}
	for(int i=1;i<n;i++){
		dp[i] = min(dp[i-1],dp[i]);
	}
	int ans = numeric_limits<int>::min();
	for(int i=1;i<n;i++){
		ans = max(ans,r[i] - dp[i-1]);
	}
	cout << ans << endl;
	return 0;
}