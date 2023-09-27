#include<iostream>
using namespace std;
bool b[21][21];
int w,h,count=0;

void dfs(int x, int y){
 b[y][x]=1;count++;
 int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
 int nx,ny;
 for(int i=0;i<4;i++){
  nx=dx[i]+x;
  ny=dy[i]+y;
  if(0<=nx&&nx<w&&0<=ny&&ny<h)
   if(b[ny][nx]==0)dfs(nx,ny);
  }
 }

int main(){
char a;
int sx,sy;
while(1){
cin>>w>>h;
count=0;
if(w+h==0)break;
for(int i=0;i<h;i++)
for(int j=0;j<w;j++){
cin>>a;
b[i][j]=0;
if(a=='#')b[i][j]=1;
if(a=='@'){sx=j;sy=i;}
}
dfs(sx,sy);
cout<<count<<endl;
}
 return 0;
}