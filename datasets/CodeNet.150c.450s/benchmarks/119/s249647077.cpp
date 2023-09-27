#include<bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=a;i<b;++i)

int m[55][55];
void dfs(int x,int y){
  m[y][x]=0;
  FOR(i,y-1,y+2) FOR(j,x-1,x+2)
    if(i>=0 && j>=0 && m[i][j]) dfs(j,i);
}

int main(){
  int w,h;
  while(cin>>w>>h,w){
    int ans=0;
    
    FOR(i,0,h) FOR(j,0,w){
      int c; cin>>c;
      m[i][j]=c;
    }
    
    FOR(i,0,h) FOR(j,0,w){
      if(m[i][j]){
	dfs(j,i);
	ans++;
      }
    }
    
    cout<<ans<<endl;
  }
  return 0;
}