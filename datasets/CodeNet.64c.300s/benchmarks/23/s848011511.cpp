#include<stdio.h>

int main(){
  int a, b;
  int s, l;

  scanf("%d %d", &a, &b);

  s=a*b;
  l=2*(a+b);

  printf("%d %d\n",s, l);
  return 0;
}