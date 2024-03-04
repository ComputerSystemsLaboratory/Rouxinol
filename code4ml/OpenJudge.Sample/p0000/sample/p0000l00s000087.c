#include <stdio.h>

int main() {
  int num1, num2, tmp, height[10];

  for (num1 = 0; num1 <= 9; num1++) {
    scanf("%d", &height[num1]);
  }

  for (num1 = 0; num1 <= 9; num1++) {
    for (num2 = num1 + 1; num2 <= 9; num2++) {
      if (height[num1] < height[num2]) {
        tmp = height[num1];
        height[num1] = height[num2];
        height[num2] = tmp;
      }
    }
  }

  for (num1 = 0; num1 <=2; num1++) {
    printf("%d\n", height[num1]);
  }

  return 0;
}