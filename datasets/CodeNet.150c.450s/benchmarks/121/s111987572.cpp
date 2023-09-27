#include<iostream>
#include<vector>
using namespace std;
int h,w;
string c[101];
int dx[]={1,0,-1,0},dy[]={0,1,0,-1};
void dfs(int x,int y,char s){
  c[x][y]='.';
  for(int i=0;i<4;i++){
    int nx=x+dx[i],ny=y+dy[i];
    if(0<=nx&&nx<h&&0<=ny&&ny<w){
      if(c[nx][ny]==s){
        dfs(nx,ny,s);
        }
      }
    }
  }
int main(){
  for(int i=0;i<=20;i++){
    cin>>h>>w;
    if(h==0&&w==0)
      break;
    for(int i=0;i<h;i++)
      cin>>c[i];
    int ans=0;
    for(int i=0;i<h;i++){
      for(int j=0;j<w;j++){
        if(c[i][j]!='.'){
          ans++;
          dfs(i,j,c[i][j]);
          }
        }
      }
    cout<<ans<<endl;
    }
  return 0;
  }

  
