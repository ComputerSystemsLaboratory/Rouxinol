#include <iostream>
#include <cstring>
#include <climits>
#include <vector>
#define int long long
using namespace std;
struct edge{int fr,to,co;};
const int INF=INT_MAX;
const int MAX_V=5000;
const int MAX_E=5000;
edge es[MAX_E];
vector <int> es2[MAX_V];
int v,e,d[MAX_V],f[MAX_V];

void dfs(int s){
  f[s]=1;
  for(int i=0;i<es2[s].size();i++) if(!f[es2[s][i]]) dfs(es2[s][i]);
}

void bellman(int s){
  fill(d,d+v,INF);
  d[s]=0;
  for(;;){
    bool u=0;
    for(int i=0;i<e;i++){
      edge e=es[i];
      if(d[e.fr]!=INF&&d[e.to]>d[e.fr]+e.co){
	d[e.to]=d[e.fr]+e.co;
	u=1;
      }
    }
    if(!u) break;
  }
}

bool bellman_f(){
  fill(d,d+MAX_V,0);
  for(int i=0;i<v;i++){
    for(int j=0;j<e;j++){
      edge e=es[j];
      if(d[e.to]>d[e.fr]+e.co){
	d[e.to]=d[e.fr]+e.co;
	if(i==v-1) return 1;
      }
    }
  }
  return 0;
}

signed main(){
  int r;
  cin>>v>>e>>r;
  for(int i=0;i<e;i++) cin>>es[i].fr>>es[i].to>>es[i].co,es2[es[i].fr].push_back(es[i].to);
  dfs(r);
  for(int i=0;i<e;i++) if(!f[es[i].fr]||!f[es[i].to]) es[i].fr=es[i].to=es[i].co=0;
  if(bellman_f()){
    cout<<"NEGATIVE CYCLE"<<endl;
    return 0;
  }
  bellman(r);
  for(int i=0;i<v;i++){
    if(d[i]==INF) cout<<"INF"<<endl;
    else cout<<d[i]<<endl;
  }
  return 0;
}