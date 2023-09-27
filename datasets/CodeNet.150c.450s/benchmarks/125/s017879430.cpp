#include <iostream>
using namespace std;

int n;
int M[100][100];
int color[100], d[100], f[100];
int t;

void Dfs(int u) {
  color[u] = 1;
  d[u] = ++t;
  for (int v = 0; v < n; v++) if (M[u][v] && color[v] == 0) Dfs(v);
  color[u] = 2;
  f[u] = ++t;
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    u--;
    for (int j = 0; j < k; j++) {
      int v;
      cin >> v;
      v--;
      M[u][v]++;
    }
  }

  for (int i = 0; i < n; i++) if (color[i] == 0) Dfs(i);

  for (int i = 0; i < n; i++) cout << i + 1 << " " << d[i] << " " << f[i] << endl;

  return 0;
}
