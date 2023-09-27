#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int,int>;
#define rep(i, n) for(int i=0; i<(int)(n); ++i)

void solve() {
  int n;
  cin >> n;
  vector<int> ans(n+1);
  for (int i = 1; i * i <= n; ++i) {
    for (int j = 1; j * j <= n; ++j) {
      for (int k = 1; k * k <= n; ++k) {
        int t = i*i + j*j + k*k + i*j + j*k + k*i;
        if (t <= n) ++ans[t];
      }
    }
  }
  for (int i = 1; i <= n; ++i) cout << ans[i] << endl;
}
void solve(bool tests) {
  int t;
  cin >> t;
  while (t--) solve();
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  solve();
}