#include<stdio.h>
int cube(int x)
{
  int y;

  y=x*x*x;
  return y;
}

int main()
{
  int x,A;

  scanf("%d",&x);

  A=cube(x);

  printf("%d\n",A);
  return 0;
}