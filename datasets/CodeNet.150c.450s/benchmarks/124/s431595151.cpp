#include <iostream>
using namespace std;

const int MAX_N = 100;
const int INF = (1 << 21);

int N;
int A[MAX_N][MAX_N];
int d[MAX_N], c[MAX_N];

void dj() {
  d[0] = c[0] = 0;

  while (1) {
    int cost = INF;
    int cur = -1;

    for (int i = 0; i < N; i ++) {
      if (c[i] != 1 && d[i] < cost) {
        cost = d[i];
        cur = i;
      }
    }

    if (cur == -1) break;
    c[cur] = 1;

    for (int v = 0; v < N; v++) {
      if (c[v] != 1 && A[cur][v] != INF) {
        if (d[cur] + A[cur][v] < d[v]) {
          d[v] = d[cur] + A[cur][v];
          c[v] = 0;
        }
      }
    }
  }

  for (int i = 0; i < N; i++)
    cout << i << ' ' << d[i] << endl;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++)
      A[i][j] = INF;
    d[i] = INF;
    c[i] = -1;
  }

  for (int i = 0; i < N; i++) {
    int cur, k; cin >> cur >> k;

    for (int j = 0; j < k; j++) {
      int u, v;
      cin >> u >> v;
      A[cur][u] = v;
    }
  }

  dj();

  return 0;
}