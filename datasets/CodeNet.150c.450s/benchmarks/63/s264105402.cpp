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
#define INF INT_MAX/2

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vll;
typedef vector<vector<ll> > vvll;
template<class T> using vv=vector<vector< T > >;

struct Edge {
  int cost;
  int to;
};

int n;
vv<Edge> g;
vector<int> d;

void dijkstra(int s) {
  d.assign(n, INF);
  priority_queue<vi, vector<vi>, greater<vi> > q;
  d[s] = 0;
  q.push({0, s}); // candidate of min-cost, edge number

  while (!q.empty()) {
    auto p = q.top(); // delete from queue
    q.pop();
    int v = p[1];
    if (d[v] < p[0]) {
      continue;
    }
    for (auto e : g[v]) {
      if (d[e.to] > d[v] + e.cost) {
        d[e.to] = d[v] + e.cost;
        q.push({d[e.to], e.to});
      }
    }
  }
}

int main() {
  int ne, s;
  scanf("%d %d %d", &n, &ne, &s);
  g.resize(n);
  rep (i, ne) {
    int a, b, d;
    scanf("%d %d %d", &a, &b, &d);
    Edge e;
    e.cost = d;
    e.to = b;
    g[a].pb(e);
  }
  dijkstra(s);
  rep (i, n) {
    if (d[i] == INF) {
      printf("INF\n");
    } else {
      printf("%d\n", d[i]);
    }
  }

  return 0;
}