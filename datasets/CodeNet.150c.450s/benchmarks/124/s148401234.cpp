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
const int INF = 1 << 30;

/* typedef */

typedef pair<int,int> pii;
typedef vector<pii> vpii;

/* global variables */

vpii nbrs[MAX_N];
int dists[MAX_N];

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int u, k;
    cin >> u >> k;
    for (int j = 0; j < k; j++) {
      int v, c;
      cin >> v >> c;
      nbrs[u].push_back(pii(v, c));
    }
  }

  for (int i = 0; i < n; i++) dists[i] = INF;
  dists[0] = 0;

  priority_queue<pii> q;
  q.push(pii(0, 0));

  while (! q.empty()) {
    pii u = q.top(); q.pop();
    int ud = -u.first, &ui = u.second;
    if (dists[ui] != ud) continue;

    vpii& nbru = nbrs[ui];
    for (vpii::iterator vit = nbru.begin(); vit != nbru.end(); vit++) {
      int &vi = vit->first, vd = ud + vit->second;
      if (dists[vi] > vd) {
	dists[vi] = vd;
	q.push(pii(-vd, vi));
      }
    }
  }

  for (int i = 0; i < n; i++) printf("%d %d\n", i, dists[i]);

  return 0;
}