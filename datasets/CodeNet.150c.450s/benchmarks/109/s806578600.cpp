#include <bits/stdc++.h>
using namespace std;

int n, ans = 0;
char dummy;
vector<int> memo[2];
void solve();

int main() {
  int i, a, b, c, x, y, z;
  while(1) {
    cin >> n;
    if(n == 0) break;
    ans = 0;
    for(i = 0; i < n; ++i) {
      cin >> a >> dummy >> b >> dummy >> c >> x >> dummy >>
          y >> dummy >> z;
      memo[0].push_back(a * 3600 + b * 60 + c);
      memo[1].push_back(x * 3600 + y * 60 + z);
    }
    for(i = 0; i < 2; ++i)
      sort(memo[i].begin(), memo[i].end());
    solve();
    cout << ans << endl;
    for(i = 0; i < 2; ++i)
      memo[i].erase(memo[i].begin(), memo[i].end());
  }
  return 0;
}

void solve() {
  int now = 0, ns = 0, ng = 0;
  for(ng = 0; ng < n; ++ng) {
    ns = ng;
    while(memo[0][ns] < memo[1][ng] && ns < n) {
      ++now;
      ++ns;
    }
    ans = max(ans, now);
    now = 0;
  }
}
