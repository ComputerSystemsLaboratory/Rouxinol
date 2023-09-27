#include<stdio.h>
int gcd(int x,int y);

int main()
{
  int a,b;
  int gcd_n;
  scanf("%d %d",&a,&b);
  gcd_n = gcd(a,b);
  printf("%d\n",gcd_n);

  return 0;
}

int gcd(int x,int y)
{
int tmp;
  
  while (y)
    {
      tmp = x % y;
      x = y;
      y = tmp;
    }
  
  return x;
}