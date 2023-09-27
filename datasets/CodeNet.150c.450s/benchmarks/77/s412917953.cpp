#define _USE_MATH_DEFINES
#define INF 0x3f3f3f3f
#include <cstdio>
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>
#include <cctype>
#include <utility>
 
using namespace std;
 
typedef long long ll;
typedef pair <int,int> P;
typedef pair <int,P > PP;
 
int tx[] = {0,1,0,-1};
int ty[] = {-1,0,1,0};
 
static const double EPS = 1e-8;

int gX,gY;
char gIdx[255];

void move(bool jewels[21][21],char dir,int dist){

  jewels[gX][gY] = false;
  for(int i=0;i<dist;i++){
    int dx = gX + tx[gIdx[dir]];
    int dy = gY + ty[gIdx[dir]];
    jewels[dx][dy] = false;
    gX = dx;
    gY = dy;
  }
}

bool isClear(bool jewels[21][21]){
  for(int y=0;y<=20;y++){
    for(int x=0;x<=20;x++){
      if(jewels[x][y]) return false;
    }
  }
  return true;
}

int main(){
  int N;
  bool jewels[21][21];

  while(~scanf("%d",&N)){
    if(N==0) break;
    gX = 10;
    gY = 10;
    gIdx['N'] = 2;
    gIdx['E'] = 1;
    gIdx['S'] = 0;
    gIdx['W'] = 3;

    memset(jewels,0,sizeof(jewels));

    for(int i=0;i<N;i++){
      int x,y;
      scanf("%d %d",&x,&y);
      jewels[x][y] = true;
    }
    int M;
    scanf("%d",&M);
    for(int i=0;i<M;i++){
      char buf[2];
      int dist;
      scanf("%s %d",buf,&dist);
      move(jewels,buf[0],dist);
    }

    printf("%s\n",isClear(jewels) ? "Yes" : "No");
  }
}