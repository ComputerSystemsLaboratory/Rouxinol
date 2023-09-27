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
vector<int> rnk;

void init(int n) {
  par = vector<int>(n);
  rnk = vector<int>(n);

  REP(i, n) {
    par[i] = i;
    rnk[i] = 0;
  }
}

int root(int x) {
  if (x == par[x]) return x;
  return root(par[x]);
}

int same(int x, int y) {
  return root(x) == root(y);
}

void unite(int a, int b) {
  int x = root(a);
  int y = root(b);

  if (rnk[x] > rnk[y]) {
    par[y] = x;
  } else {
    par[x] = y;
    rnk[x]++;
  }
}

int main() {
  int n, q;
  cin >> n >> q;
  init(n);

  REP(i, q) {
    int com, x, y;
    scanf("%d %d %d", &com, &x, &y);
    if (com == 0) {
      unite(x, y);
    } else {
      printf("%d\n", same(x, y));
    }
  }

  return 0;
}