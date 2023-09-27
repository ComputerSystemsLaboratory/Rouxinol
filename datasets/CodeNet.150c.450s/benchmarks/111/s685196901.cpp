#include <iostream>
#include <vector>

using namespace std;

typedef unsigned long long ll;

int main() {
	int n; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; ++i) cin >> v[i];

	ll dp[100][21] = {0}; // dp[?¬?????????????][?¨??????????] = ??´????????°
	dp[1][v[0]] = 1;

	for (int i = 1; i < n-1; ++i) {
		for (int j = 0; j <= 20; ++j) {
			if (j+v[i] <= 20) dp[i+1][j+v[i]] += dp[i][j]; // +
			if (j-v[i] >= 0) dp[i+1][j-v[i]] += dp[i][j]; // -
		}
	}

	cout << dp[n-1][v[n-1]] << endl;
}