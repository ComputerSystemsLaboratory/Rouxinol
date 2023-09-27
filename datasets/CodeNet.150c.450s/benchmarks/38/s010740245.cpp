#include <stdio.h>

int main(void) {
  int n;
  int i;
  
  scanf("%d", &n);

  for(i=0; i<n; i++) {
    int max, b, c;
    
    scanf("%d %d %d", &max, &b, &c);

    if (max < b) {
      int tmp = max;
      max = b;
      b = tmp;
    }
    if (max < c) {
      int tmp = max;
      max = c;
      c = tmp;
    }

    if (max * max == b*b + c*c) {
      puts("YES");
    } else {
      puts("NO");
    }
  }

  return 0;
}