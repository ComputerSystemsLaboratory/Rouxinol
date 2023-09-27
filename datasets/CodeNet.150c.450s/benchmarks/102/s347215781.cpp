#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
char heya[22][22];
char vis[22][22];
int H,W;

int solve(int x,int y){
  if(y<0||y>=W) return 0;
  if(x<0||x>=H) return 0;
  if(heya[x][y]!='.') return 0;
  if(vis[x][y]==1) return 0;
  vis[x][y]=1;
  int res=1;
  res+=solve(x+1,y);
  res+=solve(x-1,y);
  res+=solve(x,y+1);
  res+=solve(x,y-1);
  return res;
}

int main(void){
  int i,j;
  int sx,sy;
  while(cin>>W>>H,W||H){
    sx=sy=0;
    for(i=0;i<H;i++){
      for(j=0;j<W;j++){
        cin>>heya[i][j];
        vis[i][j]=0;
        if(heya[i][j]=='@'){
          sx=i;sy=j;
          heya[i][j]='.';
        }
      }
    }
    cout<<solve(sx,sy)<<endl;
  }
  return 0;
}