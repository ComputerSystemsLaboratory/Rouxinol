#include<bits/stdc++.h>
#define rep(i,n)for(int i=0;i<n;i++)
using namespace std;
int dp[50];
int main() {
  int n;
	dp[0] = 1;
	for (int i = 1; i <= 30; i++) {
		dp[i] += dp[i - 1];
    //cout << dp[i] << " ";
		if (i >= 2)dp[i] += dp[i - 2];
    //cout << dp[i] << " ";
		if (i >= 3)dp[i] += dp[i - 3];
    //cout << dp[i] << " ";
    //cout << endl;
	}
  while (cin >> n,n) {
  cout << dp[n]/10/365+1 << endl;
  }
  return 0;
}

