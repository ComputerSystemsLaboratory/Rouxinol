#include <bits/stdc++.h>
using namespace std;

constexpr int MAX_N = 1e6;

template<class T> inline void chmin(T &a, const T &b) { if(a > b) a = b; }

vector<int> init() {
	vector<int> num;
	int sum = 0;
	for(int i = 1;; ++i) {
		sum += i;
		if(sum > MAX_N) break;
		num.emplace_back(sum);
	}

	partial_sum(num.begin(), num.end(), num.begin());
	return num;
}

int main() {
	const auto num = init();

	vector<int> dp(MAX_N + 1, INT_MAX);
	vector<int> odd_dp(MAX_N + 1, INT_MAX);
	dp[0] = odd_dp[0] = 0;

	for(unsigned i = 0; i < num.size(); ++i) {
		const int &value = num[i];

		for(int j = 0; j + value <= MAX_N; ++j) {
			chmin(dp[j + value], dp[j] + 1);
		}

		if(value & 1) {
			for(int j = 0; j + value <= MAX_N; ++j) {
				chmin(odd_dp[j + value], odd_dp[j] + 1);
			}
		}
	}

	for(int n; cin >> n && n;) {
		cout << dp[n] << " " << odd_dp[n] << endl;
	}

	return 0;
}