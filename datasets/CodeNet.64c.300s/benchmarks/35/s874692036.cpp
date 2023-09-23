#include <iostream>

using namespace std;

const int MAX_V = 100;

int main ( void )
{
  int n;
  int E[MAX_V][MAX_V];

  cin >> n;

  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) { E[i][j] = 0; }

  for (int i = 0; i < n; ++i) {
    int u, k, v;
    cin >> u >> k;

    for (int i = 0; i < k; ++i) { cin >> v; E[u-1][v-1] = 1; }
  }
  
  for (int i = 0; i < n; ++i) for (int j = 0; j < n; ++j) {
    cout << E[i][j] << (j+1 == n ? '\n' : ' ');
  }
  return 0;
}