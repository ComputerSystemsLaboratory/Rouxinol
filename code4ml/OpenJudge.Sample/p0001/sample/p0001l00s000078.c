#include <stdio.h>
int main(void){
  int a,b,c,res;
  while(scanf("%d %d",&a,&b) != EOF){
    c = a+b;
    res = 0;
    for(;c > 0;c /= 10) res++;
    printf("%d\n",res);
  }
  return 0;
}