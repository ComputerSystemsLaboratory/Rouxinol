#include<iostream>
#include<cmath>
#include<vector>
#include<string>
typedef unsigned long long ull;
#define rep(i,a) for(int i=0;i<a;i++)
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;
const double eps = 1e-10;
const double pi = acos(-1);
const double inf = (int)1e8;

char maze[50][50];
int H,W;

int dfs(int x,int y){
  if(x<0 || H<=x || y<0 || W<=y)return 0;
  int cnt = 0;
  maze[x][y] = '0';
  int dx[] = { 1, 1, 1,-1,-1,-1, 0, 0};
  int dy[] = {-1, 0, 1,-1, 0, 1, 1,-1};
  rep(i,8){
    // if(i==j&&i==0)continue;
    if(maze[x+dx[i]][y+dy[i]]=='1')dfs(x+dx[i],y+dy[i]);
  }
  return cnt;
}
void solve(){
  int h,w;
  while(cin>>W>>H,H+W){
    rep(i,H)rep(j,W)cin>>maze[i][j];
    int res=0;
    rep(i,H)rep(j,W){
      //rep(k,H){rep(l,W)cout<<maze[k][l];cout<<endl;}
      //cout<<endl;
      if(maze[i][j]=='1'){
	dfs(i,j);
	res++;
      }
    }
    cout<<res<<endl;
  }
}

int main(void){
  solve();
  return 0;
}