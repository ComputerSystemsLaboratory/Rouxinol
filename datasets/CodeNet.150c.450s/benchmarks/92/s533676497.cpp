#include <cstdio>
#include <iostream>
#include <cmath>

using namespace std;

int main(void)
{  
  int a, b;
  int num, count;
  while (scanf ("%d %d", &a, &b) != EOF){
    num = a + b;
    count = 0;
    while (num != 0){
      num = num / 10;
      count++;
    }
    printf("%d\n", count);
  }

  return 0;
}