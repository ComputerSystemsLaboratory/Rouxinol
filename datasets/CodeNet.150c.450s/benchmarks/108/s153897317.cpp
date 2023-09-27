/*
 * c.cc: 
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
const int INF = 1 << 30;

/* typedef */

typedef vector<int> vi;
typedef queue<int> qi;

/* global variables */

vi nbrs[MAX_N];
int dists[MAX_N];

/* subroutines */

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

  for (int i = 0; i < n; i++) dists[i] = INF;
  dists[0] = 0;

  qi q;
  q.push(0);

  while (! q.empty()) {
    int u = q.front(); q.pop();

    int vd = dists[u] + 1;
    vi &nbru = nbrs[u];
    for (vi::iterator vit = nbru.begin(); vit != nbru.end(); vit++) {
      int &v = *vit;
      if (dists[v] > vd) {
	dists[v] = vd;
	q.push(v);
      }
    }
  }

  for (int i = 0; i < n; i++)
    printf("%d %d\n", i + 1, (dists[i] >= INF) ? -1 : dists[i]);

  return 0;
}