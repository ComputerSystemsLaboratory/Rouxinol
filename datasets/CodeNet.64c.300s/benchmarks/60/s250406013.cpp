#include<iostream>
#include<cstdio>

using namespace std;

int map[20][20];
int d[20][20];
int memo[20][20];
int w,h;
int saiki(int y,int x);

int main(){
  int kouzisuu;
  int a,b,ans;
  while(1){
    cin>>w>>h;
    if(!w && !h)break;
    for(int i=0;i<=h;i++){
      for(int j=0;j<=w;j++){
	map[i][j]=0;
	d[i][j]=0;
	memo[i][j]=0;
      }
    }
    cin>>kouzisuu;
    while(kouzisuu--){
      cin>>a>>b;
      d[b][a]=1;
    }
    memo[1][1]=1;
    ans=saiki(h,w);
    cout<<ans<<endl;
  }
}
int saiki(int y,int x){
  if(d[y][x]==1 || y<0 || x<0)return 0;
  if(memo[y][x]){
    return memo[y][x];
  }
  return memo[y][x]=map[y][x]=saiki(y,x-1)+saiki(y-1,x);
}