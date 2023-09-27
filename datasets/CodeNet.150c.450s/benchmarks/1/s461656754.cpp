#include <bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
#include<cstring>
#include<math.h>
#include<map>
#include<bitset>
#include<iomanip>
#include<queue>
#include<functional>
#include<stack>
#include<tuple>
#include<cassert>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)
using P = pair<int, int>;

int dp[100000];
const int INF = 2000000000;

int main() {
  int n;
  cin >> n;
  rep(i, n) {
    dp[i] = INF;
  }
  rep(i, n) {
    int temp;
    cin >> temp;
    int ind = lower_bound(dp, dp+n, temp) - dp;
    dp[ind] = temp;
  }
  int ans = lower_bound(dp, dp+n, INF) - dp;
  cout << ans << endl;
  return 0;
}
