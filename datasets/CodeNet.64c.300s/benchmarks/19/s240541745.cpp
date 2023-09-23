#include <stdio.h>

int main(void)
{
  while(1){
    int n;
    scanf("%d", &n);
    if(n==0){
      break;
    }

    int a[5000];
    int max;

    int i,j;
    for(i=0; i<n; ++i){
      scanf("%d", &a[i]);
      int sum = 0;
      for(j=i; j>=0; --j){
        sum += a[j];
        if((i==0 && j==0) || sum>max){
          max = sum;
        }
      }
    }

    printf("%d\n", max);
  }

  return 0;
}