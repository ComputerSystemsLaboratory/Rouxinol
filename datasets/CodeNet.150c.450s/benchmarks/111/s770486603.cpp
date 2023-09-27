#include<iostream>
#include<string.h>
#include<algorithm>

long long dp[100 + 1][20 + 1];
int k[100 + 1];

bool check(int);

using namespace std;

int main() {
	int n;

	cin >> n;
	for (int i = 0; i < n; i++) cin >> k[i];

	memset(dp, 0, sizeof(dp));
	dp[0][k[0]] = 1;
	for (int i = 1; i < n-1; i++) {
		for (int j = 0; j <= 20; j ++ ) {
			if (check(j - k[i]) == true) dp[i][j] += dp[i - 1][j - k[i]];
			if (check(j + k[i]) == true) dp[i][j] += dp[i - 1][j + k[i]];
		}
	}

	cout << dp[n-2][k[n-1]] << endl;
	//cin >> n;
	return 0;
}

bool check(int t) {
	if (t >= 0 && t <= 20) return true;
	return false;
}
