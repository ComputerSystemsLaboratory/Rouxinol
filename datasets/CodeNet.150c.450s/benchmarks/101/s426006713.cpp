#include<bits/stdc++.h>
using namespace std;
static const int MAX=100000;
static const int NUL=-1;
int n;
vector<int>g[MAX]; //頂点数を100000とする
                   //隣接リスト
int color[MAX];
void dfs(int r, int c){
  stack<int>s;
  s.push(r);
  color[r]=c;
  while(!s.empty()){
    int u=s.top();
    s.pop();
    for(int i=0;i<g[u].size();++i){
      //頂点uに隣接する頂点uを探索
      int v=g[u][i];
      if(color[v]==NUL){
	color[v]=c;
	s.push(v);	
      }
    }
  }
}
int main(){
  int s,t,m,q;
  scanf("%d %d",&n,&m);
  for(int i=0;i<m;i++){
    scanf("%d %d",&s,&t);
    g[s].push_back(t); //sからtへ辺
    g[t].push_back(s); //tからsへ辺
  }
  int id=1;
  for(int i=0;i<n;i++){
    color[i]=NUL;
  }
  for(int u=0;u<n;u++){
    if(color[u]==NUL)
      dfs(u,id++); //id(色)にかぶりがないように
  }
  scanf("%d",&q);
  for(int i=0;i<q;i++){
    scanf("%d %d",&s,&t);
    if(color[s]==color[t]) printf("yes\n");
    else printf("no\n");
  }
  return 0;
}
    
    

