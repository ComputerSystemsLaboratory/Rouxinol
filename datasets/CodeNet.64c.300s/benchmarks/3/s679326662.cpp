#include <stdio.h>

int main(void){
  int n,i,j,k;
  scanf("%d",&n);
  int retsu[n];
  for (i = 1; i <= n; i++){
    k = n - i;
    scanf("%d",&retsu[k]);
  }
  for (j = 0; j < n; j++){
    if( j ) printf(" ");
    printf("%d",retsu[j]);
    }
    printf("\n");
 return 0;
}

