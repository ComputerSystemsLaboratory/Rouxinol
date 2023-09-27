#include <bits/stdc++.h>
using namespace std;

#define fi first
#define se second
#define pb push_back

typedef long long LL;
typedef long double LD;

const LL INF = (1LL << 60);

typedef pair<LL,int> PL;
LL prim(vector<PL> adjList[], int n);

int main() {

  ios_base::sync_with_stdio(0); cin.tie(0);

  vector<PL> adjList[10005];

  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int s, t; LL w;
    cin >> s >> t >> w;

    adjList[s].push_back({w, t});
    adjList[t].push_back({w, s});
  }

  LL res = prim(adjList, n);

  cout << res << endl;

  return 0;
}

/**
 *
 * tested on http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=GRL_2_A
 */
LL prim(vector<PL> adjList[], int n) {
  LL ans = 0;

  vector<bool> visited; visited.assign(n, false);
  priority_queue<PL,vector<PL>,greater<PL>> pq; 

  pq.push({0, 0});
  while (!pq.empty()) {
    int u; LL w;
    tie(w, u) = pq.top(); pq.pop();
    
    if (visited[u])
      continue;

    visited[u] = true;
    ans += w;
    
    for (PL v : adjList[u]) {
      pq.push(v);
    }
  }

  return ans;
}
