#include<iostream>
using namespace std;
#define r(i,n) for(int i=0;i<n;i++)
int ans=1,n,m;
char map[30][30];

void d(int x,int y){
  if(x==m||y==n||x<0||y<0)return;
  if(map[x][y]=='.')ans++;
  if(map[x][y]=='#')return;
  map[x][y]='#';
  d(x+1,y),d(x-1,y),d(x,y+1),d(x,y-1);
}

int main(){
  while(cin>>n>>m,n){
  int x,y;
  ans=1;
  r(i,m)r(j,n){
    cin>>map[i][j];
    if(map[i][j]=='@')x=i,y=j;
  }
  d(x,y);
  cout<<ans<<endl;
  }
  return 0;
}