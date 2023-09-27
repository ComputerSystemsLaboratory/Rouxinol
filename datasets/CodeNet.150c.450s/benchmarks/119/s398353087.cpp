#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<map>
#include<set>
#include<queue>
#include<cstdio>
#include<climits>
#include<cmath>
#include<cstring>
#include<string>
#include<sstream>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()

#define MAX 1000
#define EPS (1e-10)
using namespace std;

typedef unsigned int uint;
typedef long long ll;

int w,h;
int  b[64][64];

void clustering(int x, int y, char num){
  if(b[y][x] == 0) return;

  b[y][x] = 0;

  REP(i,3) REP(j,3){
    int xx = x + j - 1;
    int yy = y + i - 1;
    if(xx >= 0 && xx <= w-1 && yy >= 0 && yy <= h-1)
      clustering(xx, yy, num);
  }
}

int main(){
  while(scanf("%d%d",&w,&h), w+h){
    int cl = 0;
    REP(i,h) REP(j,w) scanf("%d", &b[i][j]);
    REP(i,h) REP(j,w){
      if(b[i][j] == 1){
        clustering(j,i,b[i][j]);
        cl++;
      }
    }
    printf("%d\n",cl);
  }
  return 0;
}