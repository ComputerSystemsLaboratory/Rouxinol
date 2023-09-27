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
	for (int i = 0; i < n; i++) {
		for (int j = w; j >= ww[i]; j--) {
			dp[j] = max(dp[j], dp[j-ww[i]]+v[i]);
		}
	}
	cout << dp[w] << endl;
	return 0;
}