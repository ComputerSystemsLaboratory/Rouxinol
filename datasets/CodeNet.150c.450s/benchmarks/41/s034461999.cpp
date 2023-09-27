#include <bits/stdc++.h>
#define rep(i, to) for (int i = 0; i < (to); i++)
#define rrep(i, to) for (int i = (to) - 1; i >= 0; i--)
#define repf(i, from, to) for (int i = (from); i < (to); i++)
#define all(v) v.begin(), v.end()
#define unless(cond) if (!(cond))
using namespace std;
using ll = long long;
template <typename T>
using V = vector<T>;
template <typename T, typename U>
using P = pair<T, U>;

const int inf = INT32_MAX;

int main() {
  int v, e;
  cin >> v >> e;
  V<V<ll>> graph(v, V<ll>(v, inf));

  rep(i, v) {
    graph[i][i] = 0;
  }

  rep(i, e) {
    int s, t, d;
    cin >> s >> t >> d;
    graph[s][t] = d;
  }

  rep(k, v) {
    rep(i, v) {
      if(graph[i][k] == inf) continue;
      rep(j, v) {
        if(graph[k][j] == inf) continue;
        graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
      }
    }
  }

  bool negative = false;

  rep(i, v) {
    if(graph[i][i] < 0) {
      negative = true;
      break;
    }
  }

  if(negative) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }

  rep(i, v) {
    rep(j, v) {
      if(graph[i][j] == inf) {
        cout << "INF";
      } else {
        cout << graph[i][j];
      }

      if(j != v - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
}

