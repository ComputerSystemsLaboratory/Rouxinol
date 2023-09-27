#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, n) for (int i = (int)(n); i >= 0; i--)
#define REP(i, m, n) for (int i = (int)(m); i <= (int)(n); i++)
#define REPR(i, m, n) for (int i = (int)(m); i >= (int)(n); i--)
#define all(v) v.begin(), v.end()
typedef long long ll;

using Graph = vector<vector<int> >;

int n, sum;
vector<bool> seen;
priority_queue<pair<int, int> > pq;

void dfs(const Graph &G, int v, int p){
  seen[v] = true;

  rep(u, n){
    if(u == p) continue;
    if(G[v][u] == -1) continue;
    pq.push(make_pair((-1)*G[v][u], u));
  }

  while(!pq.empty()){
    pair<int, int> tmp;
    tmp = pq.top();
    pq.pop();
    if(seen[tmp.second]) continue;
    sum += (-1)*tmp.first;
    int nv = tmp.second;
    p = v;
    dfs(G, nv, p);
  }

  return;
}

int main(){
  cin >> n;
  Graph G(n, vector<int>(n));
  rep(i, n) rep(j, n) cin >> G[i][j];

  seen.assign(n, false);
  sum = 0;
  dfs(G, 0, -1);

  cout << sum << endl;

  return 0;
}



