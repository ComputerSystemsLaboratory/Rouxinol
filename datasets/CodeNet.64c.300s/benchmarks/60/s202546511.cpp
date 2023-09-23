#include<iostream>
using namespace std;
int mas[17][17];
int dx[2]={0,1};
int dy[2]={1,0};
int sx,sy;
int w,h,cnt;
void dfs(int x,int y);
int main(){
  int n;
  int a,b;

  while(1){
    cin >> w >> h;
    if(w==0&&h==0) break;
    for(int i=1;i<h+1;i++){
      for(int j=1;j<w+1;j++){
	mas[i][j]=0;
      }
    }

      cin >> n;
    for(int i=0;i<n;i++){
      cin>>a>>b;
      mas[b][a]=1;
    }
    cnt=0;
    sx=1;
    sy=1;
    dfs(sx,sy);
    cout<<cnt<<endl;
  }
}
void dfs(int x,int y){
  if(y==h && x==w){
    cnt++;
    return;
  }
  for(int i=0;i<2;i++){
    int nextx=x+dx[i];
    int nexty=y+dy[i];
    if(0<nextx && nextx<=w && 0<nexty && nexty<=h && mas[nexty][nextx]==0){
      dfs(nextx,nexty);
    }
  }
}