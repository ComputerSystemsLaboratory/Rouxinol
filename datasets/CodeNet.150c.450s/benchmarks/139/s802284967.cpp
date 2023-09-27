#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define rep(i, j, n) for (int i = j; i < (int)n; ++i)

int main() {
  int n, m, a, b;
  cin >> n >> m;
  vector<vector<int>> g(n);
  rep(i, 0, m) {
    cin >> a >> b;
    --a, --b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  vector<int> ans(n);
  queue<int> q;
  q.push(0);
  while (q.size()) {
    int v = q.front();
    q.pop();
    for (int nv : g[v]) {
      if (ans[nv] == 0) {
        ans[nv] = v + 1;
        q.push(nv);
      }
    }
  }
  cout << "Yes" << '\n';
  rep(i, 1, n) cout << ans[i] << '\n';
  return 0;
}
