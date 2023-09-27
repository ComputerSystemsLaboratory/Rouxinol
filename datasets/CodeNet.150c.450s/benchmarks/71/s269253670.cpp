#include <stdio.h>
using namespace std;

int main(void) {
  int sum;
  while (scanf("%d", &sum)+1) {
    if (sum > 36) {
      printf("0\n");
      continue;
    }

    int count = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    for (a = 0; a <= 9; a++) {
      for (b = 0; b <=9; b++) {
        for (c = 0; c <= 9; c++) {
          for (d = 0; d <= 9; d++) {
            if ((a + b + c + d) == sum) count++;
          }
        }
      }
    }
    printf("%d\n", count);
  }
}