#include<bits/stdc++.h>
using namespace std;
int ans,a,b;
int c[20][20];

void dfs(int y,int x){
  if(y<0 || x>a) return;
  if(y==0 && x==a-1) ans++;
  else{
    if(c[y-1][x]!=1) dfs(y-1, x);
    if(c[y][x+1]!=1) dfs(y, x+1);
  }
}
int main(){
  while(cin>>a>>b, a){
    ans=0;
    for(int i=0;i<20;++i){
      for(int j=0;j<20;++j){
        c[i][j]=0;
      }
    }
    
    int x; cin>>x;
    for(int i=0;i<x;++i){
      int s,t; cin>>s>>t;
      c[b-t][s-1]=1;
    }
    dfs(b-1, 0);
    cout<<ans<<endl;
    
    
  }
  return 0;
}