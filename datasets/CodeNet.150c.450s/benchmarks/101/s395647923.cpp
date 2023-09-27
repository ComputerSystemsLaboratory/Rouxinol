#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define REPR(i, m, n) for (int i = (int)(m); i >= (int)(n); i--)
#define all(v) v.begin(), v.end()
typedef long long ll;

using Graph = vector<vector<int> >;

vector<int> seen;

void dfs(const Graph &G, int v, int c){
  seen[v] = c;

  for(int nv : G[v]){
    if(seen[nv] != -1) continue;
    dfs(G, nv, c);
  }
}

int main(){
  int n, m; cin >> n >> m;

  Graph G(n);
  rep(i, m){
    int a, b; cin >> a >> b;
    G[a].push_back(b);
    G[b].push_back(a);
  }

  seen.assign(n, -1);
  int c = 0;
  rep(i, n){
    if(seen[i] == -1){
      dfs(G, i, c);
      c++;
    }
  }

  int q; cin >> q;
  rep(i, q){
    int s, t; cin >> s >> t;
    cout << (seen[s] == seen[t] ? "yes" : "no") << endl;
  }

  return 0;
}


