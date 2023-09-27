// Undone
#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
#define MOD 1000000007
using namespace std;
signed main() {
  int N;
  while (cin >> N, N) {
    char last = ' ';
    int ans = 0;
    for (int i = 0; i < N; i++) {
      string s; cin >> s;
      if (last == s[1]) {
        ans++;
      } else {
        last = s[1];
      }
    }
    cout << ans << endl;
  }
}


