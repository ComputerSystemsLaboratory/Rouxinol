#include <stdio.h>

int main(void){
  int i,j,k,n,x,l;
  l = 0;

  for ( ; ; ){
    scanf("%d %d",&n,&x);
    if (n == 0 && x == 0){
      break;
    }

    for (i = 1; i < n - 1; i++){
      for (j = i + 1; j < n; j++){
        for (k = j + 1; k < n + 1; k++){
          if (i + j + k == x){
            l++;
          }
        }
      }
    }
    printf("%d\n",l);
    l = 0;
  }

  return 0;
}

