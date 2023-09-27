#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// ---------------------
// repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

// debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

// ---------------------
#define INF 922337203685477580
#define IINF (1<<21)
typedef long long ll;

int V, E;
vector<pair<int, int> > G[10100];
priority_queue<pair<int, int> , vector<pair<int, int> >, greater<pair<int, int> > > Q;

int main() {
  cin >> V >> E;

  int visited[V];
  int d[V];
  int p[V];

  REP(i, E) {
    int s, t, w;
    cin >> s >> t >> w;

    G[s].push_back(make_pair(t, w));
    G[t].push_back(make_pair(s, w));
  }
  REP(i, V) {
    visited[i] = 0;
    p[i] = -1;
    d[i] = IINF;
  }


  d[0] = 0;
  Q.push(make_pair(d[0], 0));

  // REP(_, V) {
  while (!Q.empty()) {
    // int mincost = IINF;
    // int minv = -1;
    // REP(v, V) {
    //   if (!visited[v] && d[v] < mincost) {
    //     minv = v;
    //     mincost = d[v];
    //   }
    // }
    int mincost = Q.top().first;
    int minv = Q.top().second;
    Q.pop();
    visited[minv] = 1;

    for (vector<pair<int, int> >::iterator it = G[minv].begin(); it != G[minv].end(); it++) {
      int v = it->first;
      int w = it->second;

      if (!visited[v] && w < d[v]) {
        d[v] = w;
        p[v] = minv;
        Q.push(make_pair(d[v], v));
      }
    }
  }

  ll sum = 0;
  REP(i, V) {
    if (p[i] != -1) {
      for (vector<pair<int, int> >::iterator it = G[i].begin(); it != G[i].end(); it++) {
        if (it->first == p[i]) {
          sum += it->second;
          break;
        }
      }
    }
  }

  cout << sum << endl;
  return 0;
}