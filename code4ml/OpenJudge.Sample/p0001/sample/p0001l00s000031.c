#include <stdio.h>
#include <math.h>

int main(){
  int a,b;
  while(~scanf("%d%d",&a,&b)){
    printf("%d\n",1+(int)log10(a+b));
  }
  return 0;
}