#include <bits/stdc++.h>
using namespace std;
bool mp[50][50];
int dx[4]={1,0,-1,0},dy[4]={0,1,0,-1};
int h,w;
int dfs(int y,int x){
  if(mp[y][x])return 0;
  int ret=1;
  mp[y][x]=1;
  for(int i=0;i<4;i++){
    int nx=x+dx[i],ny=y+dy[i];
    if(nx<0 || nx>=w || ny<0 || ny>=h) continue;
    ret+=dfs(ny,nx);
  }
  return ret;
}
  
int main(){
  string s;
  int si,sj;
  while(cin>>w>>h && w&&h){
    memset(mp,0,sizeof(mp));
    for(int i=0;i<h;i++){
      cin>>s;
      for(int j=0;j<w;j++){
        if(s[j]=='#') mp[i][j]=1;
        else if(s[j]=='@') {si=i;sj=j;}
      }
    }
    cout<<dfs(si,sj)<<endl;
  }
  return 0;
}