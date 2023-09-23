#include <stdio.h>
int main(void) {
  int W, H, x, y, r;
  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

  if(!(0 <= x - r && x + r <= W)){
    puts("No");
    return 0;
  } else if (!(0 <= y - r && y + r <= H)) {
    puts("No");
    return 0;
  } else {
    puts("Yes");
  }

  return 0;
}