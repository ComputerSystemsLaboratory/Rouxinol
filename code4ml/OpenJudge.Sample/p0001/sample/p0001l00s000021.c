#include <stdio.h>

int main(void)
{
  int n[2], m, d;

  while (scanf("%d %d",&n[0], &n[1])!=EOF){
    d = 1;
    m = n[0] + n[1];
    while (m > 0){
      if (m > 9){
        m /= 10;
        d++;
      }
      else {
        break;
      }
    }
    printf("%d\n", d);
  }
  
  return (0);
}