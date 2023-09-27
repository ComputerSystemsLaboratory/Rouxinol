#include <cstdio>

int main()
{
  int a, b;
  int cou;

  while (scanf("%d %d", &a, &b) != EOF){
    a += b;
    cou = 0;
    while (1){
      if (a == 0){
        break;
      }

      cou++;
      a /= 10;
    }
    printf("%d\n", cou);
  }

  return (0);
}