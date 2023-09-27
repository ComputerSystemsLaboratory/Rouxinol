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

int dx[4] = {0,0,1,-1};
int dy[4] = {1,-1,0,0};

void calc(int h,int w){
  char mm[SIZE][SIZE];
  int sy,sx;
  int ans = 0;

  for(int i=0;i<h;i++){
    scanf("%s",mm[i]);

    for(int j=0;j<w;j++){
      if(mm[i][j]=='@'){
	sy = i;
	sx = j;
	mm[i][j]='.';
      }
    }
  }

  queue<pair<int,int> > q;

  q.push({sy,sx});

  while(q.size()){
    int y = q.front().first;
    int x = q.front().second;
    q.pop();

    if(mm[y][x]!='.') continue;
    mm[y][x]='#';
    ans++;

    for(int i=0;i<4;i++){
      if(y+dy[i]<0 || h<=y+dy[i] || x+dx[i]<0 || w<=x+dx[i]) continue;

      if(mm[y+dy[i]][x+dx[i]]=='.'){
	q.push({y+dy[i],x+dx[i]});
      }
    }
  }
  
  printf("%d\n",ans);
}

int main(){
  int h,w;
  
  while(1){
    scanf("%d%d",&w,&h);
    if(h==0) break;
    calc(h,w);
  }
  
  return 0;
}