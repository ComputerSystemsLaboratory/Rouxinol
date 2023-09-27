#include <iostream>
#include <stack>
using namespace std;

const int MAX = 105;
int n;
int am[MAX][MAX];
int d[MAX], f[MAX], t, color[MAX], nt[MAX];

int next(int u) {
  for (int v = nt[u]; v < n; v++) {
    nt[u] = v + 1;
    if (am[u][v]) return v;
  }
  return -1;
}

void dfs_visit(int r) {
  stack<int> S;
  S.push(r);
  color[r] = 1;
  d[r] = ++t;

  while (!S.empty()) {
    int u = S.top();
    int v = next(u);
    if (v != -1) {
      if (color[v] == 0) {
      color[v] = 1;
      d[v] = ++t;
      S.push(v);
      }
    } else {
    S.pop();
    color[u] = 2;
    f[u] = ++t;
    }
  }
}

int main() {
  int u, k, v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      cin >> v;
      am[u-1][v-1] = 1;
    }
  }

  for (int u = 0; u < n; u++) {
    if (color[u] == 0) dfs_visit(u);
  }

  for (int i = 0; i < n; i++) {
    cout << i + 1 << " " << d[i] << " " << f[i] << endl;
  }
  return 0;
}

