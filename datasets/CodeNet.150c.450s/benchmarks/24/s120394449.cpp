#include <bits/stdc++.h>
using namespace std;

long long n, m;

bool asc(pair<long long, long long> p1, pair<long long, long long> p2) {
  return p1.second > p2.second;
}

int main() {
  long long i, x, y, sum = 0, ans = 0;
  while(1) {
    cin >> n >> m;
    if(n + m == 0) break;
    sum = 0;
    ans = 0;
    vector<pair<long long, long long>> dp;
    for(i = 0; i < n; ++i) {
      cin >> x >> y;
      dp.push_back(make_pair(x, y));
    }
    sort(dp.begin(), dp.end(), asc);
    for(i = 0; i < n; ++i) {
      if(sum < m) {
        sum += dp[i].first;
        if(sum >= m) ans += (sum - m) * dp[i].second;
      }
      else
        ans += dp[i].first * dp[i].second;
    }
    cout << ans << endl;
  }

  return 0;
}
