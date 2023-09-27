#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define between(a,x,b) ((a)<=(x)&&(x)<=(b))
using namespace std;

int main(){
  int n, a, b, c, x, y[100];
  while(scanf("%d%d%d%d%d",&n,&a,&b,&c,&x) && (n||a||b||c||x)){
    rep(i, n) scanf("%d", y+i);
    int i = 0, res = 0;
    if(y[i] == x) i++;
    while(i < n){
      //      fprintf(stderr, "%d %d %d %d \n", a, b, c, x);
      x = (a * x + b) % c;
      if(y[i] == x) i++;
      res++;
      if(res > 10000) break;
    }

    if(res <= 10000) printf("%d\n", res);
    else puts("-1");
  }
  return 0;
}