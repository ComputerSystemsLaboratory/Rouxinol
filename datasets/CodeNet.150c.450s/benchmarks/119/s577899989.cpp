#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <map>
#include <set>

#include <functional>
#include <cassert>

typedef long long ll;
using namespace std;

#define mod 1000000007 //1e9+7
#define INF 1000000000 //1e9
#define LLINF 2000000000000000000LL //2e18
#define SIZE 201

int dx[8] = {0,0,1,-1,1,1,-1,-1};
int dy[8] = {1,-1,0,0,1,-1,1,-1};

int mm[SIZE][SIZE];
int h,w;

bool dfs(int y,int x){
  
  if(y<0 || h<=y || x<0 || w<=x) return false;
  if(mm[y][x]==0) return false;
  mm[y][x] = 0;
  
  for(int i=0;i<8;i++){
    dfs(y+dy[i],x+dx[i]);
  }

  return true;
}

void calc(){
  int ans = 0;

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      scanf("%d",mm[i]+j);
    }
  }

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      ans += dfs(i,j);
    }
  }
  
  printf("%d\n",ans);
}

int main(){
  
  while(1){
    scanf("%d%d",&w,&h);
    if(h==0) break;
    calc();
  }
  
  return 0;
}