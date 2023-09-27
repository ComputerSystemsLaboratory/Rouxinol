#include<functional>
#include<algorithm>
#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
#include<vector>
#include<cmath>
#include<stack>
#include<queue>
#define rep(i,n) for(int i=0;i<n;i++)
#define loop(i,x,n) for(int i=x;i<n;i++)
using namespace std;
const int INF=100000000;
char a[20][20];
int h,w;
void dfs(int x,int y){
  if(x<0||y<0||x>=w||y>=h)return ;
  if(a[y][x]=='.'){
    a[y][x]='$';
  }else return ;
  dfs(x+1,y);
  dfs(x-1,y);
  dfs(x,y+1);
  dfs(x,y-1);
}
int main(){
  while(cin>>w>>h,h!=0){
    int sx,sy;
    rep(i,h)rep(j,w){
      cin>>a[i][j];
      if(a[i][j]=='@')sx=j,sy=i;
    }
    int ans=0,k=0;
    a[sy][sx]='.';
    dfs(sx,sy);
    rep(i,h){
      rep(j,w){
	if(a[i][j]=='$')ans++;
      }
    }
    cout<<ans<<endl;
  }
  return 0;
}