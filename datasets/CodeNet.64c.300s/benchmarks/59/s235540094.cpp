#include <stdio.h>
#include <math.h>

int main(void) {
  int n; // 与えられる数値の数
  int count = 0; // 素数の数
  int i;
  
  scanf("%d", &n);

  for (i=0; i<n; i++) {
    int num;
    int j;
    int limit;
    
    scanf("%d", &num);

    limit = (int)(sqrt((double)num)) + 1;

    for(j=2; j<limit; j++) {
      if (num % j == 0)
	break;
    }

    if (j == limit)
      count++;
  }

  printf("%d\n", count);

  return 0;
}