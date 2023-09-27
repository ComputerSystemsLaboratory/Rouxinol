#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pq priority_queue
#define debug(x) cerr << #x << ": " << x << endl;
#define line() cerr << "---------------" << endl;

int main() {
   int n, m;
   while (cin >> n >> m, n) {
      vector<pair<int, int>> vp;
      for (int i = 0; i < n; i++) {
         int d, p;
         cin >> d >> p;
         vp.push_back(make_pair(p, d));
      }
      sort(vp.begin(), vp.end());
      reverse(vp.begin(), vp.end());
      int ans = 0;
      for (int i = 0; i < n; i++) {
         if (vp[i].second <= m) { // 金があれば
            m -= vp[i].second;
         } else { // 金が少ないなら
            int t = vp[i].second - m;
            ans += vp[i].first * t;
            m = 0;
         }
      }
      cout << ans << endl;
   }

   return 0;
}
