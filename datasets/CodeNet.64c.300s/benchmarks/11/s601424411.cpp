#include<cstdio>

int main() {
  int S;
  scanf("%d", &S);
  int h = S / 3600;
  int m = (S - h * 3600) / 60;
  int s = S - h * 3600 - m * 60;
  printf("%d:%d:%d\n", h, m, s);
}