#include <cstdio>

int main() {
  int ary[20],s=0,x;
  while(scanf("%d", &x)==1) {
    if(x) ary[s++] = x;
    else printf("%d\n", ary[--s]);
  }
  return 0;
}