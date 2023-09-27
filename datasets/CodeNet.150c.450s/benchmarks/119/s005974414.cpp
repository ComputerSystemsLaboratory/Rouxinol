//How Many Islands?
#include<bits/stdc++.h>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)

int nx[8]={1,1,1,0,0,-1,-1,-1}, ny[8]={1,0,-1,1,-1,1,0,-1};
int w, h;
int mp[60][60];

void solve(int x, int y){
  if(x<0 || h<=x || y<0 || w<=y || mp[x][y]!=1)return;
  mp[x][y]=0;
  rep(i,8)solve(x+nx[i], y+ny[i]);
}

int main(){
  while(true){
    cin>>w>>h;
    if(w==0&&h==0)break;
    memset(mp, 0, sizeof(mp));
    rep(i,h)rep(j,w)cin>>mp[i][j];
    int cnt=0;
    rep(i,h)rep(j,w)if(mp[i][j]==1){solve(i, j); cnt++;}
    cout<<cnt<<endl;
  }
  return 0;
}