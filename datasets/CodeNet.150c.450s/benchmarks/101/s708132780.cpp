// http://hfuji.hatenablog.jp/entry/2015/12/09/175721

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
typedef long long ll;
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
  int n, m;
  cin >> n >> m;

  init(n);

  REP(_, m) {
    int a, b;
    // cin >> a >> b;
    scanf("%d %d", &a, &b);
    unite(a, b);
  }
  int q;
  cin >> q;
  REP(_, q) {
    int a, b;
    // cin >> a >> b;
    scanf("%d %d", &a, &b);
    if (same(a, b)) {
      cout << "yes" << endl;
    } else {
      cout << "no" << endl;
    }
  }

  return 0;
}