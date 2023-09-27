
#include<stdio.h>

#define INPUT_MAX_NUM (200000)

int main(void)
{
  //input num
  int num = 0;
  //  printf("input num\n");
  scanf("%d", &num);

  //input value
  int r[INPUT_MAX_NUM];
  for (int i = 0; i < num; i++ ) {
    scanf("%d", &r[i]);
  }

  //max value of diff
  /*
  int max_diff;
  max_diff = r[1] - r[0];
  for (int i = 1; i < num; i++ ) {
    for (int j = i; j < num; j++ ) {
      if ( max_diff < r[j] - r[i-1] ) {
        max_diff = r[j] - r[i-1];
      }
    }
  }
  */

  int max_diff = r[1] - r[0];
  int min = r[0];
  for (int i = 1; i < num; i++ ){
    if ( max_diff < r[i] - min ) {
      max_diff = r[i] - min;
    }
    if ( min > r[i] ) {
      min = r[i];
    }
  }
  //printf("max_diff = %d\n", max_diff);
  printf("%d\n", max_diff);

  return 0;
}