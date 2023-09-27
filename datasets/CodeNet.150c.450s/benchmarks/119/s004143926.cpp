#include<iostream>
using namespace std;
#define r(i,n) for(int i=0;i<n;i++)
int map[55][55],w,h;

void d(int y,int x){
  if(y==h||x==w||y==-1||x==-1)return;
  if(map[y][x]==0)return;
  if(map[y][x]==1)map[y][x]=0;
  d(y-1,x-1),d(y+1,x+1),d(y+1,x),d(y,x+1),d(y-1,x),d(y,x-1),d(y-1,x+1),d(y+1,x-1);
}

int main(){
  while(cin>>w>>h,w){
    int ans=0;
    int x,y;
    r(i,h)r(j,w)cin>>map[i][j];
    while(1){
      x=-1;
      r(i,h)r(j,w)if(map[i][j]==1)y=i,x=j;
      if(x==-1)break;
      d(y,x);
      ans++;
    }
    cout<<ans<<endl;
  }
  return 0;
}