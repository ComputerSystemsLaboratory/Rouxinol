#include <stdio.h>

int main(){

  int a,b,r;
  scanf("%d%d",&a,&b);

  r = a % b;
  while(r != 0){
    a = b;
    b = r;
    r = a % b;
  }

  printf("%d\n",b);
  return 0;
}