#include <bits/stdc++.h>
using namespace std;
string mp[101];
int h,w;
bool used[101][101];

void saiki(int x,int y,char ch){
  int dx[]={0,0,-1,1},dy[]={1,-1,0,0};
  if(used[y][x]) return;
  used[y][x]=1;
  for(int i=0;i<4;i++){
    int nx=x+dx[i],ny=y+dy[i];
    if(nx<0||ny<0||nx>=w||ny>=h||mp[ny][nx]!=ch)continue;
    saiki(nx,ny,ch);
  }
}


int main(){
  while(1){

  cin>>h>>w;
  if(!h&&!w)break;
  for(int i=0;i<h;i++)cin>>mp[i];

  memset(used,0,sizeof(used));
  int ans=0;
  for(int i=0;i<h;i++)
    for(int j=0;j<w;j++)
      if(!used[i][j]) ans++,saiki(j,i,mp[i][j]);
  cout<<ans<<endl;
  }
  return 0;
}