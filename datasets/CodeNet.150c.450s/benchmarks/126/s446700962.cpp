#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
int solve(int x,int y);
int dx[2]={1,0};
int dy[2]={0,1};
int way[20][20];
int a,b,n;
int main(void){
  int tx,ty;
  while(1){
    scanf("%d %d",&a,&b);
    if(a==0 && b==0) break;
    scanf("%d",&n);
    memset(way,0,sizeof(way));
    for(int i=0;i<n;i++){
      scanf("%d %d",&tx,&ty);
      way[tx][ty]=1;
    }
    printf("%d\n",solve(1,1));
  }
}

int solve(int x,int y){
  int res=0;
  if(x==a && y==b) return 1;
  if(way[x][y])return 0;
  for(int i=0;i<2;i++){
    int nx=x+dx[i];
    int ny=y+dy[i];
    if(nx<=a && ny<=b) res+=solve(nx,ny);
  }
  return res;
}