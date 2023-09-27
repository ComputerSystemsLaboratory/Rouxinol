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
      int sum = 0;
      for (int i = 0; i < n; i++) {
         int d, p;
         cin >> d >> p;
         sum += p;
         vp.push_back(make_pair(p, d));
      }
      sort(vp.begin(), vp.end());
      reverse(vp.begin(), vp.end());
      int t = 0;
      for (int i = 0; i < n; i++) {
         while (vp[i].second != 0) {
            if (m > 0) {
               m--;
            } else {
               t += vp[i].first;
            }
            vp[i].second--;
         }
      }
      cout << t << endl;
   }

   return 0;
}
