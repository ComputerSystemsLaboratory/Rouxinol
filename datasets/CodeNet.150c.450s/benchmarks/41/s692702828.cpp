#include "bits/stdc++.h"
#define int long long
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(obj) begin(obj), end(obj)
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define SQR(x) (x) * (x)
#define itn int

using namespace std;
using ll      = long long;
const int MOD = (int)(1e9 + 7);
const int INF = (int)(1e13 + 7);
template <typename A, size_t N, typename T>
void FILL(A (&array)[N], const T &val) {
  std::fill((T *)array, (T *)(array + N), val);
}
#define MAX_V 300
int shortest_path[MAX_V][MAX_V]; //shortest_path[i][j] = cost(i→j) or INF
int V;                           //num of nodes
void warshall_floyd() {
  for (int k = 0; k < V; k++) {
    shortest_path[k][k] = 0;
  }
  for (int k = 0; k < V; k++) {
    for (int i = 0; i < V; i++) {
      for (int j = 0; j < V; j++) {
        shortest_path[i][j] = min(shortest_path[i][j], shortest_path[i][k] + shortest_path[k][j]);
      }
    }
  }
};
signed main() {
  int E;
  cin >> V >> E;
  FILL(shortest_path, INF);
  int s, t, d;
  REP(_, E) {
    cin >> s >> t >> d;
    shortest_path[s][t] = d;
  }
  warshall_floyd();
  REP(i, V) {
    if (shortest_path[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  REP(i, V) {
    REP(j, V) {
      if (shortest_path[i][j] >= INF - (int)(1e12)) {
        cout << "INF";
      } else {
        cout << shortest_path[i][j];
      }
      cout << (j != V - 1 ? " " : "");
    }
    cout << endl;
  }
}

