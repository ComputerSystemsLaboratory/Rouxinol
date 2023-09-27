#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define repR(i, n) for(int i = (n) - 1; i > -1; i--)
#define rep1(i, n) for(int i = 1; i < (int)(n + 1); i++)
#define rep1R(i, n) for(int i = (n); i > 0; i--)
#define ll long long
using namespace std;

const ll INF = (1LL<<32);
const int MAX = 100;
long long A[MAX + 1][MAX + 1];

void warshallFloyd(int V) {
  rep(k, V) rep(i, V) {
    if (A[i][k] == INF) continue;
    rep(j, V) {
      if (A[k][j] == INF) continue;
      A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
    }
  }
}

int main() {
  int V, E;
  cin >> V >> E;

  rep(i, V) rep(j, V) {
    A[i][j] = (i == j)? 0 : INF;
  }

  rep(i, E) {
    int s, t, d;
    cin >> s >> t >> d;
    A[s][t] = d;
  }

  warshallFloyd(V);

  rep(i, V) {
    if (A[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  rep(i, V) {
    rep(j, V) {
      if (A[i][j] != INF) cout << A[i][j];
      else cout << "INF";
      cout << ((j != V - 1)? " " : "\n");
    }
  }

  return 0;
}

