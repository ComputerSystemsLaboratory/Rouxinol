#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define pq priority_queue
#define debug(x) cerr << #x << ": " << x << endl;
#define line() cerr << "---------------" << endl;

int main() {
   int t[] = {500, 100, 50, 10, 5, 1};
   int n, ans;
   while (cin >> n, n) {
      n = 1000 - n, ans = 0;
      for (int i = 0; i < 6; i++) {
         ans += n / t[i];
         n %= t[i];
      }
      cout << ans << endl;
   }
   return 0;
}
