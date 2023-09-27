#include <iostream>
#include <stack>
using namespace std;
static const int N=101;
static const int White=0;
static const int Gray=1;
static const int Black=2;

int M[N][N];
int d[N],nt[N],f[N],tt,color[N];
int n;
int next_v(int k){
  for(int i=nt[k];i<=n;i++){
    nt[k]=i+1;
    if(M[k][i]) return i;
  }
  return -1;
}
void dfs_visit(int r){
  stack<int> S;
  S.push(r);
  color[r]=Gray;
  d[r]=++tt;

  while(!S.empty()){
    int u=S.top();
    int v=next_v(u);
    if(v!=-1){
      if(color[v]==White){
        color[v]=Gray;
        d[v]=++tt;
        S.push(v);
      }
    }else{
      S.pop();
      color[u]=Black;
      f[u]=++tt;
    }
  }
}
void dfs(){
  tt=0;
  for(int i=1;i<=n;i++){
    if(color[i]== White)dfs_visit(i);
  }
  for(int i=1;i<=n;i++){
    cout<<i<<" "<<d[i]<<" "<<f[i]<<"\n";
  }
}
int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    int u,k,v;
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v;
      M[u][v]=1;
    }
  }
  dfs();
}

