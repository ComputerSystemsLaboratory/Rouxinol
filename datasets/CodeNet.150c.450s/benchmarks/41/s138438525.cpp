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

const ll Inf = 1L << 61;

int main(int argc, char *argv[])
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int V, E;
  cin >> V >> E;
  ll d[V][V];
  REP(i,V) REP(j,V) {
    if (i == j) d[i][j] = 0;
    else d[i][j] = Inf;
  }
  REP(i,E) {
    ll s, t, c;
    cin >> s >> t >> c;
    d[s][t] = c;
  }
  REP(k,V) REP(i,V) REP(j,V) d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
  REP(i,V) if (d[i][i] < 0) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  REP(i,V) REP(j,V) {
    if (d[i][j] >= Inf >> 10) cout << "INF";
    else cout << d[i][j];
    if (j < V-1) cout << ' ';
    else cout << '\n';
  }
  cout << flush;

  return 0;
}