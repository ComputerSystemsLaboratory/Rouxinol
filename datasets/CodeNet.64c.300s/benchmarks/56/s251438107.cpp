#include <cstdio>

int main() {
  int n;
  scanf("%d", &n);
  for (int i=0;i<n;i++) {
    int y, m, d, cnt = 1;
    scanf("%d %d %d", &y, &m, &d);
    if (y % 3 == 0) cnt += 20*(10-m)+(20-d);
    else {
      cnt += 19+(m&1)-d;
      while (++m <= 10) cnt += 19+(m&1);
    }
    while (++y < 1000) {
      if (y % 3 == 0) cnt += 10*20;
      else cnt += 5*20 + 5*19;
    }
    printf("%d\n", cnt);
  }
  return 0;
}