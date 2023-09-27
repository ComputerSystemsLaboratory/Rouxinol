#include <stdio.h>

int main(void) {
  int i, j, k, m, d, ans;
  int m0[13] = {0, 0, 31, 60, 91, 121, 152, 182, 213, 244, 274, 305, 335};
  char w[7][25] = {
    "Wednesday",
    "Thursday",
    "Friday",
    "Saturday",
    "Sunday",
    "Monday",
    "Tuesday"
  };
  while( 1 ) {
    scanf("%d%d", &m, &d);
    if(!m && !d) break;
    ans = m0[m] + d;
    ans %= 7;
    printf("%s\n", w[ans]);
  }
  return 0;
}
