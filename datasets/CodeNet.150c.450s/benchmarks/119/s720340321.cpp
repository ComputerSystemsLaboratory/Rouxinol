#include<bits/stdc++.h>
using namespace std;
int g[52][52];
void solve(int x,int y){
  g[x][y]=0;
  for(int i=-1;i<=1;++i){
    for(int j=-1;j<=1;++j){
      if(g[x+i][y+j]) solve(x+i,y+j);
    }
  }
}
int main(){
  int w,h,cnt;
  while(cin>>w>>h&&w&&h){
    cnt=0;
    for(int i=0;i<=h+1;++i){
      for(int j=0;j<=w+1;++j){
        if(i==0||j==0||i==h+1||j==w+1) g[i][j]=0;
        else cin>>g[i][j];
      }
    }
    for(int i=1;i<=h;++i){
      for(int j=1;j<=w;++j){
        if(g[i][j]){
          solve(i,j);
          ++cnt;
        }
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}

