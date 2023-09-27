#include <bits/stdc++.h>
using namespace std;
using ll = long long;

signed main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n, m;
  cin >> n >> m;

  vector<vector<int>> edge(n);

  for (int i = 0; i < m; ++i) {
    int a, b;
    cin >> a >> b;

    edge[a-1].emplace_back(b-1);
    edge[b-1].emplace_back(a-1);
  }

  vector<int> vs(n, 0);
  queue<int> que;
  que.emplace(0);
  vs[0] = 1;

  while (!que.empty()) {
    int from = que.front(); que.pop();

    for (auto to : edge[from]) {
      if (vs[to]) continue;
      vs[to] = from+1;
      que.emplace(to);
    }
  }

  cout << "Yes" << '\n';
  for (int i = 1; i < n; ++i) cout << vs[i] << '\n';

  return (0);
}
