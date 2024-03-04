#include<stdio.h>
int main(void)
{

  int a, b, c, d, e=10,f=0;

  while(scanf("%d %d", &a, &b)!=EOF){

    c=a+b;

    while(1){
      d=c/e;
      f++;
      e=e*10;
      if(d==0)break;
  }
    printf("%d\n",f);

  }
  return 0;
}