#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> edges(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    edges.at(a).push_back(b);
    edges.at(b).push_back(a);
  }

  queue<int> q;
  vector<int> d(n, -1);
  vector<int> sign(n, -1);
  q.push(0);
  d.at(0) = 0;
  while (!q.empty()) {
    int v = q.front();
    q.pop();
    for (int x : edges.at(v)) {
      if (d.at(x) != -1) continue;
      q.push(x);
      d.at(x) = d.at(v) + 1;
      sign.at(x) = v;
    }
  }

  cout << "Yes" << endl;
  for (int i = 1; i < n; i++) {
    cout << sign.at(i) + 1 << endl;
  }

  return 0;
}