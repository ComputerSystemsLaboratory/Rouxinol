#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
  int d;

  while (~scanf("%d", &d)){
    int s = 0;
    for (int i = 0; i < 600; i += d){
      s += i * i * d;
    }
    printf("%d\n", s);
  }
  
  return (0);
}