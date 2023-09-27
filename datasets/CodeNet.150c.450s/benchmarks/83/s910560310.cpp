#include<iostream>
#include<cstdio>
#include<vector>
#include<string>
#include<map>
#include<algorithm>
using namespace std;

signed main() {
	int a, b;
	cin >> a >> b;
	int dp[10001]{};
	for (int c = 0; c < a; c++) {
		int d, e;
		cin >> d >> e;
		for (int f = b;f>=e; f--) {
			dp[f] = max(dp[f], dp[f - e] + d);
		}
	}
	cout << dp[b] << endl;
}