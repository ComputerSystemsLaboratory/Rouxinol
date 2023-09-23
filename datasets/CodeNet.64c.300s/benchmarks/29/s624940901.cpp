#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;

int isqrt(int x) {
  double d = sqrt(x);
  int i = (int)(d+0.5);
  if(i*i>x) return i-1;
  else return i;
}

int main() {
  for(int tci = 0; ; tci++) {
    int e; scanf("%d", &e);
    if(e==0) break;
    int mv = e;
    for(int z = 0; z*z*z <= e; z++) {
      int y = isqrt(e-z*z*z);
      int x = e-z*z*z-y*y;
      mv = min(mv,x+y+z);
    }
    printf("%d\n", mv);
  }
  return 0;
}