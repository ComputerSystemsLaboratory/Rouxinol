#include <iostream>

using namespace std;

int c[50][50],w,h;
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
void dfs(int y,int x){
  if(c[y][x]){
    c[y][x]=0;
    int i;
    for(i=0;i<8;i++){
      if(y+dy[i]>=0 && y+dy[i]<h && x+dx[i]>=0 && x+dx[i]<w && c[y+dy[i]][x+dx[i]])
      dfs(y+dy[i],x+dx[i]);
    }
  }
  return;
}

int main(){
  int i,j,ans;
  cin >> w >> h;
  while(1){
    ans=0;
    if(w+h==0)break;
    //for(i=0;i<50;i++)for(j=0;j<50;j++)c[i][j]=0;
    for(i=0;i<h;i++){
      for(j=0;j<w;j++)cin >> c[i][j];
    }
    for(i=0;i<h;i++){
      for(j=0;j<w;j++)if(c[i][j]){
        dfs(i,j);
        ans++;
      }
    }
    cout << ans << endl;
    cin >> w >> h;
  }
  return 0;
}

