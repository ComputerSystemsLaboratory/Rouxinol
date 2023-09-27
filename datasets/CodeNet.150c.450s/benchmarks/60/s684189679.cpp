#include <iostream>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  int G[101][101];
  int u, v, k;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      G[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      cin >> v;
      G[u][v] = 1;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if (j != 1) cout << " ";
      cout << G[i][j];
    }
    cout << endl;
  }

  return 0;
}