#include <bits/stdc++.h>
using namespace std;

int n;
long long int a[101];
long long int dp[1001][101];

long long int solve(long long int sum, int num) {
  if( sum < 0 || sum > 20 ) return 0;
  if( dp[sum][num] != 0 ) return dp[sum][num];
  if( num == n-1 ) {
    if( sum == a[n-1] ) return 1;
    else return 0;
  }
  long long int ret = solve(sum+a[num], num+1) + solve(sum-a[num], num+1);
  return dp[sum][num] = ret;
}

int main() {
  cin >> n;
  memset(dp, 0, sizeof(dp));
  for(int i=0; i<n; i++) {
    cin >> a[i];
  } 
  cout << solve(a[0], 1) << endl;
}