#include <stdio.h>

int main(void)
{
  int n[10];
  int i, j,tmp;

  for (i = 0; i < 10; i++){
    scanf("%d", &n[i]);
  }

  for (i = 0; i < 10; i++){
    for (j = i + 1; j < 10; j++){
      if (n[j] > n[i]){
        tmp = n[i];
        n[i] = n[j];
        n[j] = tmp;
      }
    }
  }

  for (i = 0; i < 3; i++){
    printf("%d\n", n[i]);
  }

  return (0);
}