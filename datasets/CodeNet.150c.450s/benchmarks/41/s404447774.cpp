#include <bits/stdc++.h>
using namespace std;

using ll = long long;
#define REP(i,n) for(int i=0; i < (n); ++i)
#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
// #define INF 1e9
const ll INF = 1LL << 60;

void warshallFloyd(vector<vector<ll>>& g){
  int n = g.size();
  REP(k, n){
    REP(i, n){
      REP(j, n){
        if(g[i][k] == INF || g[k][j]==INF) continue;
        if(g[i][k] + g[k][j] < g[i][j]){
          g[i][j] = g[i][k] + g[k][j];
        }
      }
    }
  }
}

int main(){
  int V, E;
  cin >> V >> E;
  vector<vector<ll>> g(V, vector<ll>(V, INF));
  REP(i, E){
    int s, t;
    ll d;
    cin >> s >> t >> d;
    g[s][t] = d;
  }
  REP(i, V){
    g[i][i] = 0;
  }
  warshallFloyd(g);
  REP(i, V){
    if(g[i][i] < 0){
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  REP(i, V){
    REP(j, V){
      if(g[i][j] == INF){
        cout << "INF" << (j != V-1 ? " " : "");
      }
      else{
        cout << g[i][j] << (j!=V-1 ? " " : "");
      }
    }
    cout << endl;
  }
  return 0;
}


