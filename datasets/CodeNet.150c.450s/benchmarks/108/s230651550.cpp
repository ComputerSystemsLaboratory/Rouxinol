#include <bits/stdc++.h>
using namespace std;
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
typedef long long ll;
typedef pair<int, int> P;
int main() {
  int n;
  cin >> n;
  vector<vector<int>> G(n);
  REP(i, n) {
    int u, k;
    cin >> u >> k, u--;
    REP(j, k) {
      int v;
      cin >> v, v--;
      G[u].push_back(v);
    }
  }
  vector<bool> ed(n, false);
  vector<int> dis(n, -1);
  queue<P> que{};
  ed[0] = 1;
  que.push(P(0, 0));
  while (!que.empty()) {
    P p = que.front();
    que.pop();
    int id = p.first;
    int d = p.second;
    dis[id] = d;
    REP(i, G[id].size()) {
      if (ed[G[id][i]] == true) continue;
      ed[G[id][i]] = true;
      que.push(P(G[id][i], d + 1));
    }
  }
  REP(i, n) { cout << i + 1 << " " << dis[i] << endl; }
}
