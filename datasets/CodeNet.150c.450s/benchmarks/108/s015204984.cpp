#include <iostream>
#include <queue>
using namespace std;

const int MAX = 105;
int is_visited[MAX];
int dist[MAX];
int am[MAX][MAX];
queue<int> Q;
int t, n;
int ns[MAX];

int next(int u) {
  for (int i = ns[u]; i < n; i++) {
    ns[u] = i + 1;
    if (am[u][i] == 1) {
      return i;
    }
  }
  return -1;
}

void bfs_visit(int r) {
  int current = r;

  dist[current] = 0;
  is_visited[r] = 1;
  for (int i = 0; i < n; i++) {
    if (am[current][i] == 1) {
      Q.push(i);
      dist[i] = dist[current] + 1;
      is_visited[i] = 1;
    }
  }

  while (!Q.empty()) {
    current = Q.front();
    Q.pop();
    for (int i = 0; i < n; i++) {
      if (am[current][i] == 1 && is_visited[i] == 0) {
        Q.push(i);
        dist[i] = dist[current] + 1;
        is_visited[i] = 1;
      }
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

  for (int i = 0; i < n; i++) {
    dist[i] = -1;
  }

  bfs_visit(0);

  for (int i = 0; i < n; i++) {
    if (dist[i] == MAX) {
      dist[i] = -1;
    }
    cout << i+1 << " " << dist[i] << endl;
  }
}

