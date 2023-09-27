#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdint.h>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
static const double EPS = 1e-12;
static const double PI = acos(-1.0);

#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(a) (a).begin(), (a).end()
#define DEBUG(x) cout << #x << ": " << x << endl

static const ll INF = std::numeric_limits<ll>::max() / 3;
static const ll MAX_E = 2000; // TODO
static const ll MAX_V = 1000; // TODO

struct Edge {
  ll from;
  ll to;
  ll cost; // TODO
};

Edge es[MAX_E];

ll d[MAX_V];
ll V; // TODO
ll E; // TODO

// s番目の頂点から各頂点への最短距離を求める
// s番目の頂点からのパスに負の閉路が存在する場合、falseを返す
bool bellman_ford(ll s) {
  for (ll i = 0; i < V; i++) {
    d[i] = INF;
  }
  d[s] = 0;
  for (int i = 0; i < V; i++) {
    bool update = false;
    for (ll j = 0; j < E; j++) {
      Edge e = es[j];
      if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        if (i == V - 1) {
          return false;
        }
        update = true;
      }
    }
    if (!update) {
      break;
    }
  }
  return true;
}

// trueなら負の閉路が存在する
bool find_negative_loop() {
  memset(d, 0, sizeof(d));

  for (int i = 0; i < V; i++) {
    for (int j = 0; j < E; j++) {
      Edge e = es[j];
      if (d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;

        if (i == V - 1) {
          return true;
        }
      }
    }
  }
  return false;
}

void solve(long long N, long long M, ll r, std::vector<long long> a,
           std::vector<long long> b, std::vector<long long> c) {
  V = N;
  E = M;
  REP(i, E) { es[i] = {a[i], b[i], c[i]}; }
  if (!bellman_ford(r)) {
    std::cout << "NEGATIVE CYCLE" << std::endl;
  } else {
    REP(i, V) {
      if (d[i] == INF) {
        std::cout << "INF" << std::endl;
      } else {
        std::cout << d[i] << std::endl;
      }
    }
  }
}

int main() {
  long long N;
  scanf("%lld", &N);
  long long M;
  scanf("%lld", &M);
  long long r;
  scanf("%lld", &r);
  std::vector<long long> a(M);
  std::vector<long long> b(M);
  std::vector<long long> c(M);
  for (int i = 0; i < M; i++) {
    scanf("%lld", &a[i]);
    scanf("%lld", &b[i]);
    scanf("%lld", &c[i]);
  }
  solve(N, M, r, std::move(a), std::move(b), std::move(c));
  return 0;
}

