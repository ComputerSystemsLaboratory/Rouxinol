#include <iostream>
using namespace std;

const int MAX = 100;
const int INFINITY = 2 << 21;
int n;
int G[MAX][MAX];
int distances[MAX];
int states[MAX];

void dijkstra() {
  int id = 0;
  distances[id] = 0;

  while (1) {
    int min = INFINITY;

    for (int i = 0; i < n; i++) {
      if (states[i] == 0 && distances[i] < min) {
        min = distances[i];
        id = i;
      }
    }

    if (min == INFINITY) break;

    for (int i = 0; i < n; i++) {
      if (states[i] != 0 || G[id][i] == -1) continue;
      if (distances[id] + G[id][i] < distances[i]) {
        distances[i] = distances[id] + G[id][i];
      }
    }

    states[id] = 1;
  }

  for (int i = 0; i < n; i++) {
    cout << i << " " << (distances[i] == INFINITY ? -1 : distances[i]) << endl;
  }
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) G[i][j] = INFINITY;
  }

  int u, k, v, c;
  for (int i = 0; i < n; i++) {
    distances[i] = INFINITY;
    states[i] = 0;
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      cin >> v >> c;
      G[i][v] = c;
    }
  }

  dijkstra();

  return 0;
}