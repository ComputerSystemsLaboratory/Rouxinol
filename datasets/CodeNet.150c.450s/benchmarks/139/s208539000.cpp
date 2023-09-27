/*input
6 9
3 4
6 1
2 4
5 3
4 6
1 5
6 2
4 5
5 6
*/

#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    --a; --b;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  vector<int> used(n);
  vector<int> ans(n);
  queue<int> q;
  q.push(0);
  used[0] = 1;
  while (!q.empty()){
    int now = q.front(); q.pop();
    rep(i, g[now].size()) {
      int nxt = g[now][i];
      // cout << now << ":" << g[now][i] << endl;
      if (used[nxt]) continue;
      ans[nxt] = now;
      used[nxt] = 1;
      q.push(nxt);
    }
  }
  cout << "Yes" << endl;
  for (int i = 1; i < n; i++) {
    printf("%d\n", ans[i]+1);
  }
}