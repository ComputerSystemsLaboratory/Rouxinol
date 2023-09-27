#include <bits/stdc++.h>

using namespace std;

typedef long long int64;
const int64 INF = 1LL << 59;


void solve()
{
  int V, E;
  int64 v[100][100];
  fill_n(*v, 100 * 100, INF);
  for(int i = 0; i < 100; i++) v[i][i] = 0;

  cin >> V >> E;
  while(E--) {
    int a, b, c;
    cin >> a >> b >> c;
    v[a][b] = c;
  }
  for(int k = 0; k < V; k++) {
    for(int i = 0; i < V; i++) {
      for(int j = 0; j < V; j++) {
        v[i][j] = min(v[i][j], v[i][k] + v[k][j]);
      }
      if(v[i][i] < 0) {
        cout << "NEGATIVE CYCLE" << endl;
        return;
      }
    }
  }
  for(int i = 0; i < V; i++) {
    for(int j = 0; j < V; j++) {
      if(j) cout << " ";
      if(v[i][j] >= INF / 2) cout << "INF";
      else cout << v[i][j];
    }
    cout << endl;
  }
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  solve();
}