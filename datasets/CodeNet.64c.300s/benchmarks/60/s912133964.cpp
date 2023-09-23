#include<bits/stdc++.h>
using namespace std;
  int a,b,n;
  int m[20][20]={};
int cnt;

void  dfs(int x,int y){
  if(x>a || y>b) return;
  if(m[y][x]==2) return ;
  if(x==a && y==b){cnt++;return ;}
  dfs(x+1,y);
  dfs(x,y+1);
}

int main(){
  while(1){
    cnt=0;
  cin>>a>>b;
  if(a+b==0)break;
  cin>>n;
  int x,y;
  for(int i=1;i<=b;i++)
    for(int j=1;j<=a;j++)m[i][j]=0;

  for(int i=0;i<n;i++){ cin>>x>>y; m[y][x]=2; }
  dfs(1,1);
  cout<<cnt<<endl;
  }
  return 0;
}