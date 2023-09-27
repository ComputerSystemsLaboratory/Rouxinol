#include <iostream>
using namespace std;

const int MAX = 100;
int n;
int G[MAX + 1][MAX + 1];
int bt[MAX + 1], et[MAX + 1];
int states[MAX + 1];
int t = 0;

void dfs(int id) {
  if (states[id] == 1) return;
  states[id] = 1;
  bt[id] = ++t;
  for (int i = 0; i < n; i++) {
    if (G[id][i] == 1 && states[i] == 0) {
      dfs(i);
    }
  }
  et[id] = ++t;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;

  int u, v, k;

  for (int i = 0; i < n; i++) {
    states[i] = 0;
    for (int j = 0; j < n; j++) {
      G[i][j] = 0;
    }
  }

  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    if (k > 0) {
      for (int j = 0; j < k; j++) {
        cin >> v;
        G[u - 1][v - 1] = 1;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    dfs(i);
  }

  for (int i = 0; i < n; i++) {
    cout << i + 1 << " " << bt[i] << " " << et[i] << endl;
  }

  return 0;
}