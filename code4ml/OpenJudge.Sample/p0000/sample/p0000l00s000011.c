#include <stdio.h>

int h[10];

void sort(void)
{
  int i, j, temp;

  for (i = 0; i < 10 - 1; i++) {
    for (j = 10 - 1; j > i; j--) {
      if (h[j - 1] > h[j]) {
        temp = h[j]; 
        h[j] = h[j - 1];
        h[j - 1]= temp;
      }
    }	
  }
}

int main(void)
{
  int i;

  for (i = 0; i < 10; i++){
    scanf("%d", &h[i]);
  }
  
  sort();
  for (i = 9; i > 6; i--){
    printf("%d\n", h[i]);
  }

  return (0);
}