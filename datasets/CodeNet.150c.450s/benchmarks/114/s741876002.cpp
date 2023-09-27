#include <iostream>
using namespace std;

const int MAX = 100;
const int INFINITY = 2 << 21;
int n;
int G[MAX][MAX];
int distances[MAX];
int parents[MAX];
int states[MAX];

int prim() {
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
      if (G[id][i] < distances[i]) {
        distances[i] = G[id][i];
        parents[i] = id;
      }
    }

    states[id] = 1;
  }

  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (parents[i] != -1) sum += distances[i];
  }
  return sum;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> n;

  for (int i = 0; i < n; i++) {
    distances[i] = INFINITY;
    parents[i] = -1;
    states[i] = 0;
    for (int j = 0; j < n; j++) {
      cin >> G[i][j];
    }
  }

  cout << prim() << endl;
  return 0;
}