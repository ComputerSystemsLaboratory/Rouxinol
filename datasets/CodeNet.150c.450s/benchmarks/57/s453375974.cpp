#include <stdio.h>
int main (void)
{
  int a,b,k;
  char op;
  for( ; ; ) {
    scanf("%d %c %d",&a,&op,&b);
    if (op == '+'){k = a + b;}
    else if (op == '-'){k = a - b;}
    else if (op == '*'){k = a * b;}
    else if (op == '/'){k = a / b;}
    else {break;}
    printf("%d\n",k);
  }
  return 0;
}


