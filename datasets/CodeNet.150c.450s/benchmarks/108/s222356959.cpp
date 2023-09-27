#include <iostream>
#include <queue>
using namespace std;
const int MAX_N = 100;

int A[MAX_N+1][MAX_N+1];
int D[MAX_N+1];
int N;

void solve() {
  int d;
  queue<int> Q;

  Q.push(1);
  D[1] = d = 0;

  while (!Q.empty()) {
    int c = Q.front(); Q.pop();

    for (int i = 1; i <= N; i++) {
      if (A[c][i] == 1 && D[i] == -1) {
        D[i] = D[c]+1;
        Q.push(i);
      }
    }
  }
}

int main() {
  cin >> N;

  for (int i = 1; i <= N; i++) {
    for (int j = 1; j <= N; j++) {
      A[i][j] = 0;
    }
    D[i] = -1;
  }

  for (int i = 0; i < N; i++) {
    int u, k; cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int t; cin >> t;
      A[u][t] = 1;
    }
  }

  solve();

  for (int i = 1; i <= N; i++) {
    cout << i << ' ' << D[i] << endl;
  }

  return 0;
}