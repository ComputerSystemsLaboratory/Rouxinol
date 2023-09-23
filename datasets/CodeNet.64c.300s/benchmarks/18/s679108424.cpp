#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;

int dp[50];
int main() {
	dp[0] = 1;
	for (int i = 1; i <= 30; i++) {
		dp[i] += dp[i - 1];
		if (i >= 2)dp[i] += dp[i - 2];
		if (i >= 3)dp[i] += dp[i - 3];
	}
	int n;
	while (cin >> n, n) {
		cout << ceil(dp[n] / 10. / 365.) << endl;
	}
}