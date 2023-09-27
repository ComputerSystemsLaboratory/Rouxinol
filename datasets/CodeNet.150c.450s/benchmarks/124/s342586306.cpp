#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<(int)(n);i++)
using namespace std;

struct edge { int from, to, cost; };
const int MAX_V=100;
const int INF=1e9;

vector<edge> es;
int d[MAX_V];
int n;

void shortest_path(int s){
  REP(i, n) d[i] = INF;
  d[s] = 0;
  while(true){
    bool update = false;
    for(edge e : es){
      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
	d[e.to] = d[e.from] + e.cost;
	update = true;
      }
    }
    if(!update) break;
  }
}

int main(){
  cin>>n;
  REP(i,n){
    int u, k; cin>>u>>k;
    REP(j,k){
      edge e;
      e.from = u;
      cin>>e.to>>e.cost;
      es.push_back(e);
    }
  }
  shortest_path(0);
  REP(i,n){
    cout<<i<<" "<<d[i]<<endl;
  }
}