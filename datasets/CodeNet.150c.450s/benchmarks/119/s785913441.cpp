#include <cstdio>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;
int dx[8]={1,1,1 ,0, 0,-1,-1,-1};
int dy[8]={0,1,-1,1,-1, 1, 0,-1};
int c[55][55];
int w,h;
int res;
void paint(int i,int j,int k){
  if(i<0||j<0)return;
  else if(i>=h||j>=w) return;
  else if(c[i][j]!=1) return;
  c[i][j]=k;
  for(int l=0;l<8;l++) paint(i+dx[l],j+dy[l],k);
  return;
}
void count(int i,int j){
  res++;
  paint(i,j,res);
  return;
}
int main(void){
  int i,j;
  while(scanf("%d %d",&w,&h),w|h){
    res=1;
    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
        scanf("%d",&c[i][j]);
      }
    }
    for(i=0;i<h;i++){
      for(j=0;j<w;j++){
        if(c[i][j]==1){
          count(i,j);
        }
      }
    }
    printf("%d\n",res-1);
  }
  return 0;
}