#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector< vector<int> > graph(n + 1, vector<int>(n + 1));
  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int v;
      cin >> v;
      graph[u][v]++;
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << graph[i][j];
      if (j == n) cout << endl; else cout << " ";
    }
  }
  return 0;
}
