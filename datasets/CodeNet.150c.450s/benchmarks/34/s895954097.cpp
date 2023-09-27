#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define ll long long
#define REP(i,n) for(int i=0;i<n;i++)
#define PP(m) REP(i, m.size()) cout << m[i] << endl;

int main() {
  vector<long long> dp(31);
  dp[0] = 1;
  dp[1] = 1;
  dp[2] = 2;
  for(int i = 3; i < 31; i++){
    dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
  }

  int n;

  while (cin >> n && n) {
    cout << ceil(dp[n] / 3650) + 1 << endl;
  }
  return 0;
}