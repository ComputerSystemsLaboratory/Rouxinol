#include <stdio.h>

int main() {
  int m, f, r;
  int mf;

  scanf("%d %d %d", &m, &f, &r);
  mf = m + f;
  while(m != -1 || f != -1 || r != -1) {
    if(m == -1 || f == -1) {
      printf("F\n");
    } else if(mf >= 80) {
      printf("A\n");
    } else if(65 <= mf && mf < 80) {
      printf("B\n");
    } else if(50 <= mf && mf < 65) {
      printf("C\n");
    } else if(30 <= mf && mf < 50) {
      if(r >= 50) {
        printf("C\n");
      } else {
        printf("D\n");
      }
    } else {
      printf("F\n");
    }
    scanf("%d %d %d", &m, &f, &r);
    mf = m + f;
  }
  return 0;
}