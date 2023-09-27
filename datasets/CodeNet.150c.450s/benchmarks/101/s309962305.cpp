#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define repr(i, n) for (int i = (n); i >= 0; --i)
#define FOR(i, m, n) for (int i = (m); i < (n); ++i)
#define FORR(i, m, n) for (int i = (m); i >= (n); --i)
using namespace std;
typedef long long ll;
const ll mod = 1000000007;
const ll mod2 = 998244353;
const int INF = 1000000005;
const int MAX = 100005;

vector<int> to[MAX];
bool seen[MAX];
int n, color[MAX], c = 0;

void dfs(int u, int c) {
  if (seen[u]) return;
  seen[u] = true;
  color[u] = c;
  for (int v: to[u]) {
    dfs(v, c);
  }
}

int main() {
  int n, m, s, t, q;
  cin >> n >> m;
  rep(i, m) {
    cin >> s >> t;
    to[s].push_back(t);
    to[t].push_back(s);
  }

  rep(i, n) {
    seen[i] = false;
    color[i] = -1;
  }

  rep(i, n) {
    dfs(i, c);
    c++;
  }

  cin >> q;
  rep(i, q) {
    cin >> s >> t;
    if (color[s] != -1 && color[s] == color[t]) cout << "yes" << endl;
    else cout << "no" << endl;
  }

  
  return 0;
}
