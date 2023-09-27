/*
 * b.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

const int MAX_N = 100;

/* typedef */

typedef vector<int> vi;

/* global variables */

vi nbrs[MAX_N];
int ds[MAX_N], fs[MAX_N];

/* subroutines */

int dfs(int u, int t) {
  ds[u] = ++t;

  for (int i = 0; i < nbrs[u].size(); i++) {
    int &v = nbrs[u][i];
    if (! ds[v]) t = dfs(v, t);
  }

  return (fs[u] = ++t);
}

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    u--;

    for (int j = 0; j < k; j++) {
      int v;
      cin >> v;
      v--;
      nbrs[u].push_back(v);
    }
  }

  int t = 0;
  for (int i = 0; i < n; i++)
    if (! ds[i]) t = dfs(i, t);

  for (int i = 0; i < n; i++)
    printf("%d %d %d\n", i + 1, ds[i], fs[i]);

  return 0;
}