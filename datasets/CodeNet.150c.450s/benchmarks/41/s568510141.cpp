#include <algorithm>
#include <iostream>
using namespace std;

const int MAX_V = 100;
const long long INF = (1LL << 32);

long D[MAX_V][MAX_V];
int V;

void wf() {
  for (int k = 0; k < V; k++) {
    for (int i = 0; i < V; i++) {
      if (D[i][k] == INF) continue;
      for (int j = 0; j < V; j++) {
        if (D[k][j] == INF) continue;
        D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
      }
    }
  }
}

int main() {
  int e;
  cin >> V >> e;

  for (int i = 0; i < V; i++) {
    for (int j = 0; j < V; j++) {
      D[i][j] = ((i == j) ? 0 : INF);
    }
  }

  for (int i = 0; i < e; i++) {
    int s, t; cin >> s >> t;
    long d; cin >> d;

    D[s][t] = d;
  }

  wf();

  bool negative = false;

  for (int i = 0; i < V; i++) {
    if (D[i][i] < 0) negative = true;
  }

  if (negative) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }

  for (int i = 0; i < V; i++) {
    for (int j = 0; j < V; j++) {
      if (j) cout << ' ';
      if (D[i][j] == INF) cout << "INF";
      else cout << D[i][j];
    }
    cout << endl;
  }

  return 0;
}