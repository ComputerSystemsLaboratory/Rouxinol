#include <iostream>
#include <vector>
#include <algorithm>
#define INF (1<<30)
using namespace std;

int main() {
	cin.tie(0); ios::sync_with_stdio(false);
	int n; cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n;i++) {
		cin >> a[i];
	}
	int ans = 0;
	vector<int> dp(n + 1, 0);
	/*
	//	O(n^2) TLE
	//	dp[i] = a[i]???????????????????´???¨????????¨???????¢??????¨??????????????§???
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i;j++) {
			if (a[j] < a[i])
				dp[i] = max(dp[i], dp[j] + 1);
		}
		ans = max(ans, dp[i]);
	}
	*/
	//	O(nlogn)
	fill(dp.begin(), dp.end(), INF);
	for (int i = 0; i < n;i++) {
		*lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
	}
	ans = distance(dp.begin(), lower_bound(dp.begin(), dp.end(), INF));
	cout << ans << endl;
}