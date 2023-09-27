#include <iostream>
using namespace std;

const int INF = 2001;
const int MAX_N = 100;

int N;
int A[MAX_N][MAX_N];

void solve() {
  int cost , d[MAX_N], p[MAX_N];
  bool c[MAX_N];

  for (int i = 0; i < N; i++) {
    c[i] = false;
    d[i] = INF;
    p[i] = -1;
  }

  d[0] = 0;
  
  while (1) {
    int cost = INF;
    int from = -1;

    for (int i = 0; i < N; i++) {
      if (d[i] < cost && !c[i]) {
        cost = d[i];
        from = i;
      }
    }

    if (from == -1) break;

    c[from] = true;

    for (int dest = 0; dest < N; dest++) {
      if (!c[dest] && A[from][dest] != -1) {
        if (A[from][dest] < d[dest]) {
          d[dest] = A[from][dest];
          p[dest] = from;
        }
      }
    }
  }

  int sum = 0;
  for (int i = 0; i < N; i++)
    if (p[i] != -1) sum += A[i][p[i]];

  cout << sum << endl;
}

int main() {
  cin >> N;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < N; j++)
      cin >> A[i][j];
  solve();
}