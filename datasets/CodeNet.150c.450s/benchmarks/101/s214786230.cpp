#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vi = vector<int>;
using vvi = vector<vi>;
using vll = vector<ll>;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)

void assign(vvi &g, vi &group, int n = 0) {
  rep(i, g.size()) {
    if (group[i] != -1) continue;
    group[i] = i;
    
    queue<int> q;
    q.push(i);
    while (!q.empty()) {
      int f = q.front(); q.pop();
      for (auto v: g[f]) {
        if (group[v] == -1) {
          group[v] = i;
          q.push(v);
        }
      }
    }
  }
}

int main() {
  int n, m;
  cin >> n >> m;
  
  vvi g(n);
  rep(i, m) {
    int s, t;
    cin >> s >> t;
    
    g[s].push_back(t);
    g[t].push_back(s);
  }

  vi group(n, -1);
  assign(g, group);
  
  int q;
  cin >> q;

  rep(i, q) {
    int s, t;
    cin >> s >> t;

    cout << (group[s] == group[t] ? "yes" : "no") << endl;
  }
}

