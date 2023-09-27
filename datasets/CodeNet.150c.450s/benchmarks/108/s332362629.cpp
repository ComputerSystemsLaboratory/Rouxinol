#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main() {
  int n;
  cin >> n;

  vector<vector<int> > G(n, vector<int>(n, 0));
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

  queue<int> q;
  vector<int> d(n, -1);
  d[0] = 0;
  q.push(0);
  while ( !q.empty() ) {
    int p = q.front(); q.pop();
    for ( int i = 0; i < n; i++ ) {
      if ( G[p][i] && d[i] == -1 ) {
	q.push(i);
	d[i] = d[p]+1;
      }
    }
  }

  for ( int i = 0; i < n; i++ ) {
    cout << i+1 << " " << d[i] << endl;
  }
  
  return 0;
}

