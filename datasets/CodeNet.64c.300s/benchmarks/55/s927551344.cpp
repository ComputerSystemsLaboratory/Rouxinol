
#include<stdio.h>

int main(){
  int i,a;
  i = 0;
  a = 1;
  while(1)
    {
      i++;
      scanf("%d",&a);
      if (a == 0){break;};
      printf("Case ");
      printf("%d",i);
      printf(": ");
      printf("%d",a);
      printf("\n");
    };
  return 0;
}