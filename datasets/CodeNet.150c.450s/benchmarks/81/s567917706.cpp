#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <utility>
using namespace std;

typedef pair<int,int> P;

#define REP(i,b,n) for(int i=b;i<n;i++)
#define rep(i,n) REP(i,0,n)

struct edge {
  int from, to, cost;
};

const int INF = 10000000;
int n, d[10];

void solve() {
  vector<edge> es(2*n);
  
  int towns = 0;
  rep(i,n) {
    int f, t, c; cin>>f>>t>>c;
    es[i*2].from = f; es[i*2].to = t; es[i*2].cost = c;
    es[i*2+1].from = t; es[i*2+1].to = f; es[i*2+1].cost = c;
    towns = max(towns, max(f,t));
  }
    
  int town, mini = INF;
  rep(z,towns+1) {
    rep(i,10) d[i] = INF;
    priority_queue<P> que;
    que.push(P(0, z));
    while (!que.empty()) {
      P p = que.top(); que.pop();
      int cc = p.first, ii = p.second;
      if (cc > d[ii]) continue;
      d[ii] = cc;
      rep(i,n*2) {
        edge e = es[i];
        if (d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
          d[e.to] = d[e.from] + e.cost;
          que.push(P(d[e.to], e.to));
        }
      }
    }
    
    int sum = 0;
    rep(i,towns+1) sum += d[i];
    if (sum < mini) {
      town = z;
      mini = sum;
    }
  }
  cout<<town<<" "<<mini<<endl;
}

int main (int argc, char const* argv[]) {
  while (cin>>n, n) {
    solve();
  }
  return 0;
}