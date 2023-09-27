/*
 * d.cc: 
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

const int MAX_N = 100000;
const int INF = 1 << 30;

/* typedef */

typedef vector<int> vi;
typedef queue<int> qi;

/* global variables */

vi nbrs[MAX_N];
int ids[MAX_N];

/* subroutines */

/* main */

int main() {
  int n, m;
  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int u, v;
    cin >> u >> v;
    nbrs[u].push_back(v);
    nbrs[v].push_back(u);
  }

  int gn = 0;

  for (int st = 0; st < n; st++)
    if (! ids[st]) {
      ids[st] = ++gn;
      qi q;
      q.push(st);

      while (! q.empty()) {
	int u = q.front(); q.pop();
	vi &nbru = nbrs[u];

	for (vi::iterator vit = nbru.begin(); vit != nbru.end(); vit++) {
	  int &v = *vit;
	  if (! ids[v]) {
	    ids[v] = gn;
	    q.push(v);
	  }
	}
      }
    }

  int qn;
  cin >> qn;
  while (qn--) {
    int s, t;
    cin >> s >> t;
    cout << (ids[s] == ids[t] ? "yes" : "no") << endl;
  }
  return 0;
}