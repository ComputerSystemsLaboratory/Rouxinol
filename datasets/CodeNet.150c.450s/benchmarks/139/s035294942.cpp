#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> G(N);
  for (int i = 0, x, y; cin >> x >> y; i++) {
    G.at(--x).push_back(--y);
    G.at(y).push_back(x);
  }
  vector<int> depth(N, -1), ans(N);
  queue<int> Q;
  Q.push(0);
  depth.at(0) = 0;
  ans.at(0) = -1;
  while (Q.size()) {
    int now = Q.front();
    Q.pop();
    for (auto next : G.at(now)) {
      if (depth.at(next) == -1) {
        depth.at(next) = depth.at(now) + 1;
        ans.at(next) = now;
        Q.push(next);
      }
    }
  }
  cout << "Yes" << "\n";
  for (int i = 1; i < N; i++) {
    cout << ans.at(i) + 1 << "\n";
  }
}