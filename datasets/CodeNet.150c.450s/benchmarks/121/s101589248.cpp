#include<bits/stdc++.h>
#define N 100
using namespace std;
bool used[N][N];
string d[N];
int h,w,ans;
char c;
int dy[4]={-1,0,1,0};
int dx[4]={0,1,0,-1};

void dfs(int y,int x){
  used[y][x]=true;
  for(int i=0;i<4;i++){
    int ny=y+dy[i],nx=x+dx[i];
    if(ny<0||nx<0||h<=ny||w<=nx)continue;
    if(used[ny][nx]||d[ny][nx]!=c)continue;
    dfs(ny,nx);
  }
}

int main(){
  while(1){
    cin>>h>>w;
    if(!h&&!w)break;
    for(int i=0;i<h;i++)cin>>d[i];
    ans=0;
    memset(used,0,sizeof(used));
    for(int i=0;i<h;i++)
      for(int j=0;j<w;j++)
	if(!used[i][j])c=d[i][j],dfs(i,j),ans++;
    cout<<ans<<endl;
  }
  return 0;
}