#include <bits/stdc++.h>
using namespace std;
#define _GLIBCXX_DEBUG

int main() {
  int n;
  cin >> n;
  vector<vector<int>> dst(n + 1);
  for (int i = 1; i <= n; i++) {
    int u, k;
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int v;
      cin >> v;
      dst[i].push_back(v);
    }
  }
  queue<int> Q;
  vector<int> ans(n + 1, -1);
  ans[1] = 0;
  Q.push(1);
  while (Q.size()) {
    int p = Q.front();
    for (int d : dst[p]) {
      if (ans[d] == -1) {
        ans[d] = ans[p] + 1;
        Q.push(d);
      }
    }
    Q.pop();
  }
  for (int i = 1; i <= n; i++) {
    cout << i << ' ' << ans[i] << endl;
  }
}

