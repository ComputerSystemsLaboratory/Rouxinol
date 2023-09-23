#include<iostream>
#include<cstdio>
using namespace std;

int f(int x)
{
  return x * x;
}

int main(void)
{
  int a, i, d;

  while(scanf("%d", &d) != EOF)
  {
    a = 0;

    for(i=1; i < 600/d; i++)
    {
      a = d * f(d*i) + a;
    }

    printf("%d\n", a);
  }

  return 0;
}

