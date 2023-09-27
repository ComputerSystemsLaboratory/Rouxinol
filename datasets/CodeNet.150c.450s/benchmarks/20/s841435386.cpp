#include<stdio.h>

int main(void){
  int s,m,h;

  scanf("%d",&s);
  m=s/60;
  s%=60;
  h=m/60;
  m%=60;
  printf("%d:%d:%d\n",h,m,s);
}