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
#include<numeric>
#include<cassert>

#define f first
#define s second
#define mp make_pair

#define REP(i,n) for(int i=0; i<(int)(n); i++)
#define rep(i,s,n) for(int i=(s); i<(int)(n); i++)
#define FOR(i,c) for(__typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++)
#define ALL(c) (c).begin(), (c).end()
#define IN(x,s,g) ((x) >= (s) && (x) < (g))
#define ISIN(x,y,w,h) (IN((x),0,(w)) && IN((y),0,(h)))
#define print(x) printf("%d\n",x)

using namespace std;

typedef unsigned int uint;
typedef long long ll;

const int _dx[] = {0,1,0,-1};
const int _dy[] = {-1,0,1,0};

int getInt(){
  int ret = 0,c;
  c = getchar();
  while(!isdigit(c)) c = getchar();
  while(isdigit(c)){
    ret *= 10;
    ret += c - '0';
    c = getchar();
  }
  return ret;
}

int memo[20][20];
bool f[20][20];

int main(){
  while(true){
    int w = getInt();
    int h = getInt();

    if(w + h == 0) break;

    int n = getInt();

    REP(i,h) REP(j,w) memo[i][j] = 0;
    REP(i,h) REP(j,w) f[i][j] = true;
    
    REP(i,n){
      int x = getInt() - 1;
      int y = getInt() - 1;

      f[y][x] = false;
    }

    memo[0][0] = 1;
    REP(i,h) REP(j,w) if(f[i][j]){
      int tmp = 0;
      if(i != h - 1) memo[i+1][j] += memo[i][j];
      if(j != w - 1) memo[i][j+1] += memo[i][j];
    }

    print(memo[h-1][w-1]);
  }

  return 0;
}