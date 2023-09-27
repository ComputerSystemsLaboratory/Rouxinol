#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int n, w;
	cin >> n >> w;
	vector<int> v(n);
	vector<int> ww(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i] >> ww[i];
	}
	vector<int> dp(w+1, 0);
	vector<int> dp2(w+1, 0);
	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= w; j++) {
			if (j-ww[i] >= 0) {
				dp2[j] = max(dp2[j], dp[j-ww[i]]+v[i]);
			}
		}
		dp = dp2;
	}
	cout << dp[w] << endl;
	return 0;
}