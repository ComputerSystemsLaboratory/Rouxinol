#include <stdio.h>
int main(void) {
  int n, a, b, pointa, pointb, i;
  while(scanf("%d",&n),n) {
    pointa = 0; pointb = 0;
  for(i = 0; i < n; i++ ) {
    scanf("%d%d",&a,&b);
    if(a < b) {
      pointb += a+b;
    } else if(a > b) {
      pointa += a+b;
    } else {
      pointa += a; pointb += b;
    }
  }
  printf("%d %d\n",pointa,pointb);
  }
  return(0);
}