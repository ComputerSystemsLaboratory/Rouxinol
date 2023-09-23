#include <stdio.h>

int main(void)
{
  int a, b, i;
  char op;

  for (i=1; ; i++){
    scanf("%d %c %d", &a, &op, &b);
    if (op == '?')
      break;
    
    switch (op) {
      case '+':
	printf("%d\n", a+b);
        break;
      case '-':
        printf("%d\n", a-b);
        break;
      case '*':
        printf("%d\n", a*b);
        break;
      case '/':
        printf("%d\n", a/b);
        break;
    }
  }

  return 0;
}