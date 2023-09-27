#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i < (n); i++)
#define lower(s) transform(s.begin(), s.end(), s.begin(), ::tolower)
using namespace std;
using ll = long long;
int INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> g(n);
  rep(i, m) {
    int a, b;
    cin >> a >> b;
    a--; b--;
    g[a].push_back(b);
    g[b].push_back(a);
  }
  queue<int> q;
  q.push(0);
  vector<int> d(n, -1);
  vector<int> prev(n);
  d[0] = 0;
  while(!q.empty()) {
    int v = q.front(); q.pop();
    for(int nv : g[v]) {
      if(d[nv] != -1) continue;
      prev[nv] = v;
      d[nv] = d[v] + 1;
      q.push(nv);
    }
  }
  bool ok = true;
  rep(i, n) {
    if(d[i] == -1) ok = false;
  }
  if(ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  rep(i, n) {
    if(i == 0) continue;
    cout << prev[i]+1 << endl;
  }
  return 0;
}