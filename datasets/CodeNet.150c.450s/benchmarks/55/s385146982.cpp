#include <stdio.h>
#include <stdlib.h>

#define NUM 1001
#define MAX 10000000
int main(void){
  char input_x[NUM][NUM];
  int sum[NUM] = {0};
  int cnt = 0;
  int i, j, temp;

  i = 0;
  do {
    scanf("%s", input_x[i]);
    // printf("%s\n", input_x[i]);
    // printf("(%d)\n", atoi(input_x[i]));
    cnt++;
    i++;
  } while (input_x[i - 1][0] != '0');

  i = 0;
  do {
    j = 0;
    temp = atoi(&input_x[i][j]);
    while (input_x[i][j] > 0) {
      // sum[i] += atoi(&input_x[i][j]) % 10;
      sum[i] += input_x[i][j] - '0';
      // printf("(%d)\n", input_x[i][j] - '0');
      // printf("[%d], [%d]", i, j);
      // sum[i] += temp % 10;
      // temp /= 10;
      j++;
    }
    i++;
  } while (i < cnt);

  i = 0;
  while (i < cnt - 1) {
    printf("%d\n", sum[i]);
    i++;
  }

  return 0;
}