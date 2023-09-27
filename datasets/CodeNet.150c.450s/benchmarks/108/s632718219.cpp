#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
#include<cmath>
#include<numeric>
#include<map>
#include<stack>
#include<queue>
using namespace std;
int inf = 1000000000;

class Graph{
public:
  int v;
  int cost = inf;
  int ftime = -1;
  int ltime = -1;
  vector<int> e;
};
vector<Graph> g;
int cnt = 0;
void dfs(int pos){
  if( g[pos].ftime != -1 ) return;
  cnt++;
  g[pos].ftime = cnt;
  for(int i=0; i<g[pos].e.size(); i++){
    dfs(g[pos].e[i]);
  }
  cnt++;
  g[pos].ltime = cnt;
}
void bfs(int pos){
  queue<int> q;
  q.push(pos);
  while(!q.empty()){
    int p = q.front();
    q.pop();
    for(int i=0; i<g[p].e.size(); i++){
      if( g[ g[p].e[i] ].cost != inf ) continue;
      g[ g[p].e[i] ].cost = min(g[ g[p].e[i] ].cost, g[p].cost + 1);
      q.push(g[p].e[i]);
    }
  }
}

int main(void) {

  int n;
  cin >> n;
  g.resize(n);
  int u, k;
  for(int i=0; i<n; i++){
    cin >> u >> k;
    u--;
    g[u].v = u;
    g[u].e.resize(k);
    for(int j=0; j<k; j++){
      cin >> g[u].e[j];
      g[u].e[j]--;
    }
    sort(g[u].e.begin(), g[u].e.end());
  }

  g[0].cost = 0;
  bfs(0);
  for(int i=0; i<n; i++) cout << g[i].v + 1 << " " << (g[i].cost == inf ? -1 : g[i].cost) << endl;

  // for(int i=0; i<n; i++) dfs(i);
  // for(int i=0; i<n; i++){
  //   cout << g[i].v + 1 << " " << g[i].ftime << " " << g[i].ltime << endl;
  // }



  return 0;
}

// EOF