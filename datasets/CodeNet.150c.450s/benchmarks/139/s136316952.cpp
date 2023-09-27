#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  ll n, m;
  cin >> n >> m;
  vector<vector<int>> edges(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    edges.at(a).push_back(b);
    edges.at(b).push_back(a);
  }

  // 幅優先探索を行う
  queue<int> q;
  vector<bool> checked(n, false);
  vector<int> sign(n, -1);

  q.push(0);
  checked.at(0) = true;
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int x : edges.at(u)) {
      if (checked.at(x)) continue;
      q.push(x);
      checked.at(x) = true;
      sign.at(x) = u;
    }
  }

  cout << "Yes" << endl;
  for (int i = 1; i < n; i++) {
    cout << sign.at(i) + 1 << endl;
  }
  return 0;
}