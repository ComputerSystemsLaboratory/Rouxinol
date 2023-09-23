#include <stdio.h>
#include <stdlib.h>

int main(void){
  int i = 0;
  int k = 0;
  int j = 0;
  int n;
  int input;
  int *num;
  int swapNum = 0;
  int temp;

  int minj;

  scanf("%d", &n);
  num = (int *)malloc(n * sizeof(int));

  for(i = 0; i < n; i++){
    scanf("%d", &input);
    num[i] = input;
  }

  for(i = 0; i < n-1; i++){
    minj = i;
    for(k = i+1; k < n; k++){
      if(num[k] < num[minj]){
        minj = k;
      }
    }
    if(minj != i){
      temp = num[i];
      num[i] = num[minj];
      num[minj] = temp;
      swapNum++;
    }
  }

  for(i = 0; i < n; i++){
    printf("%d", num[i]);
    if(i < n-1)printf(" ");
  }
  printf("\n");
  printf("%d\n", swapNum);

  return 0;
}