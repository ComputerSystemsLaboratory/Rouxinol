#include <bits/stdc++.h>
using namespace std;

#define rep(i,s,n) for (int i = (int)s; i < (int)n; i++)
#define ll long long
#define pb push_back
#define All(x) x.begin(), x.end()
#define Range(x, i, j) x.begin() + i, x.begin() + j
#define lbidx(x, y) lower_bound(x.begin(), x.end(), y) - x.begin()
#define ubidx(x, y) upper_bound(x.begin(), x.end(), y) - x.begin()
#define BiSearchRangeNum(x, y, z) lower_bound(x.begin(), x.end(), z) - lower_bound(x.begin(), x.end(), y)
#define deg_to_rad(deg) ((((double)deg)/((double)360)*2*M_PI))
#define rad_to_deg(rad) ((((double)rad)/(double)2/M_PI)*(double)360)

template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
};

template<class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
};

// 単一始点全点間最短路を求めるアルゴリズム。単一始点全点間最短路を求めるアルゴリズム。負辺があっても動作する。また負閉路も検出する。

// 計算量 O(V * E)

static const int INF = 1e9;

struct Edge {
  int from;
  int to;
  int cost;
};

vector<int> bellman_ford(int s, int V, vector<Edge> &edges) {
  vector<int> dist(V, INF);
  dist[s] = 0;
  rep(i, 0, V - 1) {
    rep(j, 0, edges.size()) {
      struct Edge e = edges[j];
      if (dist[e.from] == INF) continue;
      dist[e.to] = min(dist[e.to], dist[e.from] + e.cost);
    }
  }

  bool flag = true;
  rep(i, 0, edges.size()) {
    struct Edge e = edges[i];
    if (dist[e.from] == INF) continue;
    // 負回路発見
    if (dist[e.from] + e.cost < dist[e.to]) {
      flag = false;
      break;
    }
  }

  if (flag) {
    return dist;
  } else {
    vector<int> neg;
    return neg;
  }
};


int main() {
  int V, E, r;
  cin >> V >> E >> r;
  vector<Edge> edges(E);
  int s, t, d;
  rep(i, 0, E) {
    cin >> s >> t >> d;
    edges[i] = { s, t, d };
  }

  vector<int> dist = bellman_ford(r, V, edges);
  if (dist.empty()) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  } else {
    rep(i, 0, dist.size()) {
      if (dist[i] == INF) {
        printf("INF\n");
      } else {
        printf("%d\n", dist[i]);
      }
    }
    return 0;
  }
};

