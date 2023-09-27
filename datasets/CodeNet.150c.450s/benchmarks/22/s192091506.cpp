#include <cstdio>
#include <cstring>
#include <cmath>
#include <climits>
#include <iostream>
#include <iomanip>
#include <list>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <utility>
#include <algorithm>
#include <numeric>
#include <functional>

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ALL(a) (a).begin(),(a).end()

using namespace std;
typedef long long ll;

struct edge { int s, t, d; };
int V, E, R;
const ll Inf = 1L << 56;

int main(int argc, char *argv[])
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  cin >> V >> E >> R;
  if (E == 0) {
    cout << 0 << endl;
    return 0;
  }
  edge es[E];
  ll d[V];
  REP(i,V) d[i] = Inf;
  d[R] = 0;
  REP(i,E) cin >> es[i].s >> es[i].t >> es[i].d;
  int count = 0;
  while (true) {
    count++;
    if (count == V) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
    bool update = false;
    REP(i,E) {
      edge e = es[i];
      if (d[e.s] == Inf)
        continue;
      ll dd = d[e.s] + e.d;
      if (d[e.t] > dd) {
        d[e.t] = dd;
        update = true;
      }
    }

    if (!update)
      break;
  }

  REP(i,V) {
    if (d[i] == Inf) {
      cout << "INF\n";
    } else {
      cout << d[i] << '\n';
    }
  }
  cout << flush;
    
  return 0;
}