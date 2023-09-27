#include <bits/stdc++.h>

#define rep(i, n) for (int i = 0; i < (n); i++)

using namespace std;

using ll = long long;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  vector<int> to[n];
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--, b--;
    to[a].emplace_back(b);
    to[b].emplace_back(a);
  }
  vector<int> ans(n, -1);
  ans[0] = 1;
  queue<int> q;
  q.push(0);
  while (!q.empty()) {
    int p = q.front();
    q.pop();
    for (auto&& e : to[p]) {
      if (ans[e] != -1) continue;
      ans[e] = p;
      q.push(e);
    }
  }
  cout << "Yes" << '\n';
  for (int i = 1; i < n; i++) {
    ans[i]++;
    cout << ans[i] << '\n';
  }
  return 0;
}
