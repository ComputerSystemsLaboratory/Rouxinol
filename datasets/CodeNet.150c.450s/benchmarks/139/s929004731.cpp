#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <vector>
using namespace std;
#define rep(i, j, n) for (int i = j; i < (int)n; ++i)

bool used[101];

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  rep(i, 0, m) {
    int a, b;
    cin >> a >> b;
    --a, --b;
    g[a].push_back(b);
    g[b].push_back(a);
  }

  queue<int> q;
  vector<bool> used(n);
  vector<int> ans(n);
  q.push(0);
  used[0] = true;
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int nv : g[v]) {
      if (!used[nv]) {
        used[nv] = true;
        ans[nv] = v;
        q.push(nv);
      }
    }
  }

  cout << "Yes" << '\n';
  rep(i, 1, ans.size()) cout << ans[i] + 1 << '\n';
  return 0;
}
