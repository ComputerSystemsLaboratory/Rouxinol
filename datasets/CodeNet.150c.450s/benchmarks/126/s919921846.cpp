#include<iostream>
#include<cstdio>
using namespace std;

int map[20][20];
int d[20][20];
int main(){
  int w,h;
  while(1){
  cin>>w>>h;
  if(!w && !h)break;
  for(int i=0;i<=h+1;i++){
    for(int j=0;j<=w+1;j++){
      map[i][j]=0;
      d[i][j]=0;
    }
  }
  int kouzisuu;
  int a,b;
  cin>>kouzisuu;
  for(int i=0;i<kouzisuu;i++){
    cin>>a>>b;
    d[b][a]=1;
  }
  map[0][1]=1;
  for(int i=1;i<=h;i++){
    for(int j=1;j<=w;j++){
      if(d[i][j]==1)continue;
      map[i][j]=map[i-1][j]+map[i][j-1];
     
    }
  }
  cout<<map[h][w]<<endl;
}
}