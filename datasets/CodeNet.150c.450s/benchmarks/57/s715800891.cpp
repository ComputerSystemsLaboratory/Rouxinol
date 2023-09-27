#include <stdio.h>
int main(void) {
int a, b;
char op;
scanf("%d %c %d", &a, &op, &b);
while( op != '?') {
if( op == '+' ) {printf("%d\n", a + b);}
if( op == '-' ) {printf("%d\n", a - b);}
if( op == '*' ) {printf("%d\n", a * b);}
if( op == '/' ) {printf("%d\n",a / b);}
scanf("%d %c %d", &a, &op, &b);
}
return 0;
}