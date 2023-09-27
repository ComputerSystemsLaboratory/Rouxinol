#include<cstdio>

int main() {
  int W, H, x, y, r;
  scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
  if( x - r  < 0 || y - r < 0 || y + r > H || x + r > W) {
    printf("No\n");
  } else {
    printf("Yes\n");
  }
}