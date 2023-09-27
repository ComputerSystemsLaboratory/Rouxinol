#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
#include <cstdio>
#include <string>
#include <cmath>
#include <cfloat>
#include <map>
using namespace std;
static int hat[100][100];
static int w,h;

void dfs(int x, int y,int k);

int main(void){
  int i,j,ans,i1,j2;

  //?????????1??????2?????????3??¢?´¢??????0
  while(1){
  ans=0;
  scanf("%d%d",&h,&w);
  if(h==0&&w==0) break;
  char hatt[h][w];
  for(i=0;i<h;i++){
    scanf("%s",hatt[i]);
    for(j=0;j<w;j++){
      if('@'==hatt[i][j]){hat[i][j]=1;
      }else if('#'==hatt[i][j]){hat[i][j]=2;
      }else if('*'==hatt[i][j]){hat[i][j]=3;
    }
    }
  }
  for(i=0;i<h;i++){
    for(j=0;j<w;j++){
      if(hat[i][j]!=0){
	ans++;
	dfs(j,i,hat[i][j]);
      }
    }
  }
  printf("%d\n", ans);
  }
return 0;
}

void dfs(int x,int y,int k){
  hat[y][x]=0;
  //???
  if(y!=h-1&&hat[y+1][x]==k) dfs(x,y+1,k);
    //???
  if(x!=w-1&&hat[y][x+1]==k) dfs(x+1,y,k);
    //???
  if(y!=0&&hat[y-1][x]==k) dfs(x,y-1,k);
    //???   
  if(x!=0&&hat[y][x-1]==k) dfs(x-1,y,k);
}