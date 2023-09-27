#include <algorithm>
#include <cassert>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>

#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define rep(i,n) FOR(i,0,n)
#define pb push_back
#define eb emplace_back
#define mp make_pair
#define fst first
#define snd second
#define all(v) begin(v), end(v)
#define debug(x) cerr<< #x <<": "<<x<<endl
#define debug2(x,y) cerr<< #x <<": "<< x <<", "<< #y <<": "<< y <<endl

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;
template<class T> using vv=vector<vector< T > >;

int V, E;
struct Edge {
  int s;
  int t;
  int cost;
};
vector<Edge> edge;
vector<int> d;
#define INF 1e9

bool bellman_ford(int s) {
  d.assign(V, INF);
  d[s] = 0;

  rep (i, V-1) {
    rep (j, E) {
      auto e = edge[j];
      auto u = e.s;
      auto v = e.t;
      if (d[u] == INF) {
        continue;
      }
      if (d[v] > d[u] + e.cost) {
        d[v] = d[u] + e.cost;
      }
    }
  }
  rep (j, E) {
    auto e = edge[j];
    auto u = e.s;
    auto v = e.t;
    if (d[u] == INF) {
      continue;
    }
    if (d[v] > d[u] + e.cost) {
      return false;
    }
  }
  return true;
}

int main() {
  int src;
  scanf("%d %d %d", &V, &E, &src);
  edge.resize(E);
  rep (i, E) {
    int s, t, d;
    scanf("%d %d %d", &s, &t, &d);
    edge[i].s = s;
    edge[i].t = t;
    edge[i].cost = d;
  }

  bool valid = bellman_ford(src);
  if (valid) {
    rep (i, V) {
      if (d[i] == INF) {
        printf("INF\n");
      } else {
        printf("%d\n", d[i]);
      }
    } 
    return 0;
  }
  printf("NEGATIVE CYCLE\n");

  return 0;
}