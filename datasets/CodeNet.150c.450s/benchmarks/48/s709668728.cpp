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
#define INF 1 << 30
 
using namespace std;
 
int main(){
  int e;
  while(scanf("%d", &e) && e){
    int res = INF;
    for(int i = 0; i * i * i <= e; i++){
      int z = i;
      int y = sqrt(e-z*z*z);
      int x = e-(y*y+z*z*z);
      res = min(res, z + y + x);
    }
 
    printf("%d\n", res);
  }
  return 0;
}
