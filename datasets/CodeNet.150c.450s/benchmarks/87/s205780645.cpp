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
 
const static int tx[] = {0,1,0,-1};
const static int ty[] = {-1,0,1,0};

const static double EPS = 1e-8;

int stage[10][5];
bool marked[10][5];


void disp(int W,int H){
  for(int y = 0; y < H; y++){
    for(int x = 0; x < W; x++){
      printf("%d ",stage[y][x]);
    }
    printf("\n");
  }
  printf("\n");
}

bool mark(int W,int H){
  bool res = false;
  memset(marked,false,sizeof(marked));
  for(int sy = 0; sy < H; sy++){
    for(int sx = 0; sx < W; sx++){
      int count = 1;
      for(int x = sx; x + 1 < W; x++){
        if(stage[sy][x] != -1 
           && stage[sy][x] == stage[sy][x+1]){
          count++;
        }
        else {
          break;
        }
      }
      if(count >= 3){
        for(int x = sx; count > 0; x++,count--){
          marked[sy][x] = true;
          res = true;
        }
      }
    }
  }
  return res;
}

int compute_score(int W,int H){
  int freq[10] = {};
  for(int y = 0; y < H; y++){
    for(int x = 0; x < W; x++){
      if(marked[y][x]){
        freq[stage[y][x]]++;
      }
    }
  }

  int res = 0;
  for(int i = 1; i <= 9; i++){
    res += freq[i] * i;
  }
  return res;
}

void erase(int W,int H){
  int next[10][5];
  memset(next,-1,sizeof(next));

  for(int x = 0; x < W; x++){
    int pos = H - 1;
    for(int y = H - 1; y >= 0; y--){
      if(!marked[y][x]){
        next[pos][x] = stage[y][x];
        pos--;
      }
    }
  }
  memcpy(stage,next,sizeof(int)*10*5);
}

int main(){
  int H;
  const int W = 5;
  while(~scanf("%d",&H)){
    if(H == 0) break;
    memset(stage,-1,sizeof(stage));
    for(int y = 0; y < H; y++){
      for(int x = 0; x < W; x++){
        scanf("%d",&stage[y][x]);
      }
    }

    int res = 0;
    while(mark(W,H)){
      res += compute_score(W,H);
      erase(W,H);
    }
    printf("%d\n",res);
  }
}