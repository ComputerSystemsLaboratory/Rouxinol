#include <bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i=0; i<(n); ++i)
using ll = long long;
using P = pair<int, int>;

const int MAX = 100003;
vector<int> G[MAX];
int color[MAX];
int n;

void dfs(int s, int id) {
  stack<int> S;
  S.push(s);
  color[s] = id;

  while (!S.empty()) {
    int u = S.top(); S.pop();
    rep(i,G[u].size()) {
      int v = G[u][i];
      if (color[v] == -1) {
	color[v] = id;
	S.push(v);
      }
    }
  }
}

void assignColor() {
  int id = 1;
  memset(color, -1, sizeof(color));
  rep(u,n) {
    if (color[u] == -1) dfs(u, id++);
  }
}

int main() {
  int m, s, t;
  cin >> n >> m;
  rep(i,m) {
    cin >> s >> t;
    G[s].push_back(t);
    G[t].push_back(s);
  }

  assignColor();

  int q;
  vector<bool> ans;
  cin >> q;
  rep(i,q) {
    cin >> s >> t;
    if (color[s] == color[t]) ans.push_back(true);
    else ans.push_back(false);
  }
  rep(i,q) {
    cout << (ans[i] ? "yes" : "no") << endl;
  }
  return 0;
}

