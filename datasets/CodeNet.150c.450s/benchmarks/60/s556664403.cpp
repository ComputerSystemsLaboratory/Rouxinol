#include <iostream>
using namespace std;
typedef long long ll;
#define int ll

int g[105][105];

signed main(void) {
  int n, u, k, v;

  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      cin >> v;
      g[u][v] = 1;
    }
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < n; j++) {
      cout << g[i][j] << " ";
    }
    cout << g[i][n] << endl;
  }
  return 0;
}