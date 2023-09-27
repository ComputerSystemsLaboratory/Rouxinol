#include <bits/stdc++.h>
#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define INF INT_MAX/3
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;

int dy[]={0, 0, 1, -1, 0};
int dx[]={1, -1, 0, 0, 0};

#define MAX_N 10000
int G[MAX_N][MAX_N];
int MIN_COSTS[MAX_N];

int main() {
  int n;
  cin >> n;
  REP(i, n) {
    REP(j, n) {
      G[i][j] = INT_MAX;
    }
    MIN_COSTS[i] = INT_MAX;
  }
  int u, k;
  int v, c;
  REP(i, n) {
    cin >> u >> k;
    REP(j, k) {
      cin >> v >> c;
      G[u][v] = c;
    }
  }

  priority_queue<P> q;
  int position;
  int new_cost;
  q.push(P(0, 0));
  while (q.size() != 0){
    position = q.top().first;
    MIN_COSTS[position] = q.top().second;
    q.pop();
    REP(i, n) {
      if (G[position][i] != INT_MAX) {
        new_cost = MIN_COSTS[position] + G[position][i];
        if (new_cost < MIN_COSTS[i]) {
          MIN_COSTS[i] = new_cost;
          q.push(P(i, new_cost));
        }
      }
    }
  }

  REP(i, n) {
    cout << i << ' ' << MIN_COSTS[i] << endl;
  }

  return 0;
}

