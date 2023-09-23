#include <iostream>
using namespace std;
const int MAX_N = 100;

int main() {
  int a[MAX_N+1][MAX_N+1];
  int n; cin >> n;

  for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++)
      a[i][j] = 0;
      
    
  for (int i = 0; i < n; i++) {
    int u, k; cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int t; cin >> t;
      a[u][t] = 1;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j > 1) cout << ' ';
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}