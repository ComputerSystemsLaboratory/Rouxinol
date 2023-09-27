#include <bits/stdc++.h>
using namespace std;

int t;
vector<int> d, f;
int n;
vector<vector<int> > G;

void dfs(int v) {
  if ( d[v] ) return;
  d[v] = ++t;  

  for ( int i = 0; i < n; i++ ) {
    if ( G[v][i] ) dfs(i);
  }

  f[v] = ++t;  
}

int main() {
  cin >> n;

  d = vector<int>(n, 0);
  f = vector<int>(n, 0);

  G = vector<vector<int> >(n, vector<int>(n, 0));
  for ( int i = 0; i < n; i++ ) {
    int u, k;
    cin >> u >> k;
    u--;
    for ( int i = 0; i < k; i++ ) {
      int v;
      cin >> v;
      v--;
      G[u][v] = 1;
    }
  }

  for ( int i = 0; i < n; i++ ) {
    if ( !d[i] ) dfs(i);
  }

  for ( int i = 0; i < n; i++ ) {
    cout << i+1 << " " << d[i] << " " << f[i] << endl;
  }
  
  return 0;
}

