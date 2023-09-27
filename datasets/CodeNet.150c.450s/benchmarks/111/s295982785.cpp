#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
#include <utility>
#include <functional>

using namespace std;

int main() {
	int n, a[100];
	vector<long long> dp(21);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	dp[a[0]] = 1;
	for (int i = 1; i < n - 1; ++i) {
		vector<long long> temp = dp;
		fill(dp.begin(), dp.end(), 0LL);
		for (int j = 0; j <= 20; ++j) {
			if (temp[j] > 0) {
				if (j - a[i] >= 0)
					dp[j - a[i]] += temp[j];
				if (j + a[i] <= 20)
					dp[j + a[i]] += temp[j];
			}
		}
	}

	cout << dp[a[n - 1]] << endl;

	return 0;
}