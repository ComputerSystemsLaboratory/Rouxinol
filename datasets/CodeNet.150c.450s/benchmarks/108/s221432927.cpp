#include <iostream>
#include <queue>
using namespace std;

const int MAX = 100;
int n;
int G[MAX + 1][MAX + 1];
int states[MAX + 1];
int d[MAX + 1];
queue<int> Q;

void bfs(int id) {
  d[id] = 0;
  states[id] = 1;
  Q.push(id);

  while (!Q.empty()) {
    id = Q.front(); Q.pop();
    for (int i = 0; i < n; i++) {
      if (G[id][i] == 1 && states[i] == 0) {
        Q.push(i);
        states[i] = 1;
        d[i] = d[id] + 1;
      }
    }
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;

  int u, v, k;

  for (int i = 0; i < n; i++) {
    d[i] = -1;
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

  bfs(0);

  for (int i = 0; i < n; i++) {
    cout << i + 1 << " " << d[i] << endl;
  }

  return 0;
}