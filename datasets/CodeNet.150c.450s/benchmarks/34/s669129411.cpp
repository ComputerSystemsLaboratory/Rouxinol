#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<cstdio>
#include<cmath>
#include<iomanip>
#include<algorithm>
#include<functional>
#include<queue>
#include<stack>
using namespace std;
int main() {
	long long dp[31];
	int n;
	while (cin >> n&&n != 0) {
		for (int i = 0; i <= n; i++) {
			dp[i] = 0;
		}
		dp[0] = 1;

		for (int i = 0; i <= n; i++) {
			for (int j = 1; j <= 3; j++) {
				if (i - j >= 0) {
					dp[i] += dp[i - j];
				}
			}
		}
		long long a = ceil(dp[n] / 10.0);
		int b = a % 365;
		if (b == 0) cout << a / 365 << endl;
		else cout<<a / 365 + 1 << endl;
	}
}