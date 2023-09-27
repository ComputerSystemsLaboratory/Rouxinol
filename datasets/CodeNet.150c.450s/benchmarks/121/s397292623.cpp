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
char a[100][100];
int h,w;
void dfs(int x,int y,char f){
  if(x<0||y<0||x>=w||y>=h)return ;
  if(a[y][x]==f){
    a[y][x]='$';
  }else return ;
  dfs(x+1,y,f);
  dfs(x-1,y,f);
  dfs(x,y+1,f);
  dfs(x,y-1,f);
}

int main(){
  while(cin>>h>>w,h!=0){
    rep(i,h)rep(j,w)cin>>a[i][j];
    int count=0;
    rep(i,h){
      rep(j,w){
	if(a[i][j]!='$'){
	  dfs(j,i,a[i][j]);
	  count++;
	}
      }
    }
    cout<<count<<endl;
  }
  return 0;
}