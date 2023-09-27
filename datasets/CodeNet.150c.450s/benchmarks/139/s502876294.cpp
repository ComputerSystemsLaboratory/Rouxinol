#include <bits/stdc++.h>

using namespace std;

vector<int> edge[100001];

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, m;
  cin >> n >> m;
  while (m--) {
    int a, b;
    cin >> a >> b;
    a--;
    b--;
    edge[a].emplace_back(b);
    edge[b].emplace_back(a);
  }
  queue<int> q;
  vector<int> bfs(n, -1);
  vector<int> prv(n);
  bfs[0] = 0;
  prv[0] = -1;
  q.push(0);
  while (!q.empty()) {
    int i = q.front();
    q.pop();
    for (auto ed : edge[i]) {
      if (bfs[ed] == -1) {
        bfs[ed] = bfs[i] + 1;
        prv[ed] = i;
        q.push(ed);
      }
    }
  }
  cout << "Yes" << '\n';
  for (int i = 1; i < n; i++) {
    cout << prv[i] + 1 << '\n';
  }
  return 0;
}