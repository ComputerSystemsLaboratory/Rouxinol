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

vector<pair<int, pair<int, int> > > G;
int V, E;

vector<int> par;
vector<int> rnk; // ??±???
void init(int n) {
  par = vector<int>(n);
  rnk = vector<int>(n);
  REP(i, n) {
    par[i] = i;
    rnk[i] = 0;
  }
}
int root(int key) {
  if (par[key] == key) return key;
  return root(par[key]);
}
int same(int a, int b) {
  return root(a) == root(b);
}
void unite(int a, int b) {
  int x = root(a);
  int y = root(b);
  if (x == y) return;

  if (rnk[x] < rnk[y]) {
    par[x] = y;
  } else {
    par[y] = x;
    if (rnk[x] == rnk[y]) rnk[x]++;
  }
}

int main() {
  cin >> V >> E;


  REP(i, E) {
    int s, t, w;
    cin >> s >> t >> w;

    G.push_back(make_pair(w, make_pair(s, t)));
  }
  init(V);
  sort(G.begin(), G.end());

  // for (auto g: G) {
  //   cerr << g.first << " (" << g.second.first << ", " << g.second.second << ")" << endl;
  // }

  ll sum = 0;
  for (auto g: G) {
    int s, t, w;
    w = g.first;
    s = g.second.first;
    t = g.second.second;

    if (!same(s, t)) {
      unite(s, t);
      sum += w;
    }
  }

  cout << sum << endl;

  return 0;
}