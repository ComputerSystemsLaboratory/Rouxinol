#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
     while (cin >> n >> m && (n || m)) {
         vector<pair<int, int>> dp;
         for (int i = 0; i < n; ++i) {
             int d, p; cin >> d >> p;
             dp.push_back(make_pair(p, d));
         }

         sort(dp.begin(), dp.end(), greater<pair<int, int>>());

         int s = 0;
         for (int i = 0; i < n; ++i) {
             s += dp[i].first*dp[i].second;
         }

         for (int i = 0; i < n; ++i) {
             int guarded = min(m, dp[i].second);
             s -= dp[i].first*guarded;
             m -= guarded;
          }

         cout << s << endl;
     }
}