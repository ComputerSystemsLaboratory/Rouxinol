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
  for(int i=0; i<n; i++) dfs(i);
  for(int i=0; i<n; i++){
    cout << g[i].v + 1 << " " << g[i].ftime << " " << g[i].ltime << endl;
  }



  return 0;
}

// EOF