#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

struct Edge {
  int to, cost;
};

int n;
vector<vector<Edge> > G;

vector<int> dij() {
  priority_queue<P, vector<P>, greater<P> > Q;
  vector<int> d(n, -1);
  Q.push({0, 0});
  while ( !Q.empty() ) {
    P p = Q.top(); Q.pop();
    int v = p.second, c = p.first;

    if ( d[v] >= 0 ) continue;
    d[v] = c;
    
    for ( Edge e: G[v] ) {
      Q.push({c+e.cost, e.to});
    }    
  }

  return d;
}

int main() {
  cin >> n;

  G = vector<vector<Edge> >(n);
  for ( int i = 0; i < n; i++ ) {
    int u, k;
    cin >> u >> k;
    for ( int i = 0; i < k; i++ ) {
      int v, c;
      cin >> v >> c;
      G[u].push_back({v, c});      
    }
  }

  vector<int> d = dij();
  for ( int i = 0; i < n; i++ ) {
    cout << i << " " << d[i] << endl;
  }
  
  return 0;
}

