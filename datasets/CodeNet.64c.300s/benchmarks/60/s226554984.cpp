#include<iostream>
using namespace std;

int sq[30][30];
int a,b,n;
int ans=0;

void bfs(int x,int y){
 
  int dx[2]={0,1};
  int dy[2]={1,0};

  for(int i=0;i<2;i++){
    int nx,ny;
    nx=x-dx[i];
    ny=y+dy[i];
    if(nx==0&&ny==a-1){
      ans++;
      return;
    }
    if(0<=nx&&nx<b&&0<=ny&&ny<a&&sq[nx][ny]!=1) bfs(nx,ny);
  }
  return;
}

int main(){
  while(1){
    cin>>a>>b;
    if(a+b==0) break;  

    for(int i=0;i<=25;i++){
      for(int j=0;j<=25;j++) sq[i][j]=0;
    }
    cin>>n;
    for(int i=0;i<n;i++){
      int x,y;
      cin>>x>>y;
      sq[b-y][x-1]=1;
      // cout<<b-y<<" "<<x-1<<endl;
    }
  
    bfs(b-1,0);

    cout<<ans<<endl;
    ans=0;
  }
  return 0;
}