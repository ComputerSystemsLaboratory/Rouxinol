#include <stdio.h>
int main(void) {
int a, b, c, w;
scanf("%d", &a);
scanf("%d", &b);
scanf("%d", &c);
if( a > b ) {
w = a;
a = b;
b = w;
}
if( b > c ) {
w = b;
b = c;
c = w;
}
if( a > b ) {
w = a;
a = b;
b = w;
}
printf("%d %d %d\n", a, b, c);
return 0;
}