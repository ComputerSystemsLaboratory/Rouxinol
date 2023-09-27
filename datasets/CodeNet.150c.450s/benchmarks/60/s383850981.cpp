#include <iostream>
using namespace std;

int v[100][100];

signed main()
{
  int n;
  int u, k;

  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int tmp;
      cin >> tmp;
      v[u - 1][tmp - 1] = 1;
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j == n - 1) cout << v[i][j] << endl;
      else cout << v[i][j] << " ";
    }
  }

  return (0);
}