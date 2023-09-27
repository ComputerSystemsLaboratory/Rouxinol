#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
	int n, w;
	cin >> n >> w;
	int dp[100001];
	for (int i = 0; i < 100001; i++) dp[i] = 0;
	dp[0] = 0;
	for (int i = 0; i < n; i++) {
		int v, w;
		cin >> v >> w;
		for (int j = 100000-w; j >=0; j--) {
			dp[j + w] = max(dp[j + w], dp[j]+v);
		}
	}
/*	for (int i = 0; i < 100001; i++) cout << dp[i] << " ";
	cout << endl;*/
	for (int i = 1; i < 100001; i++) dp[i] = max(dp[i], dp[i - 1]);
	cout << dp[w] << endl;
	return 0;
}