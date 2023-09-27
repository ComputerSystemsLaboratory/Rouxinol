#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> maze(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    maze.at(a).push_back(b);
    maze.at(b).push_back(a);
  }

  // 幅優先探索を行う
  queue<int> q;
  vector<int> sign(n, -1);

  q.push(0);
  sign.at(0) = 0;
  while (!q.empty()) {
    int x = q.front();
    q.pop();
    for (int u : maze.at(x)) {
      if (sign.at(u) != -1) continue;
      q.push(u);
      sign.at(u) = x;
    }
  }

  cout << "Yes" << endl;
  for (int i = 1; i < n; i++) {
    cout << sign.at(i) + 1 << endl;
  }
  return 0;
}