#include <stdio.h>

int main(void)
{
  int a,b = 0;
  scanf("%d\n",&a);
  
  while(a != 0){
    b++;
    printf("Case %d: %d\n",b,a);
    scanf("%d\n",&a);
  }
return 0;
}