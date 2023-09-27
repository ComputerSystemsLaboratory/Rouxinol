#include <stdio.h>
#include <stdlib.h>
int min(int a, int b ){
  if (a > b) {
    return b;
  } else {
    return a;
  }
}
int main(void) {
  int n,a[1000],ans;
  scanf("%d",&n );
  while(n){
    ans = 1000000;
    for (int i = 0; i < n; i++) {
      scanf("%d",&a[i] );
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (i != j) {
          ans = min(ans, abs(a[j] - a[i]));
        }
      }
    }
    printf("%d\n",ans );
    scanf("%d",&n );
  }
  return 0;
}
