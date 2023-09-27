#include <stdio.h>

int main() {
 int L, M, a, b;
 scanf( "%d %d", &a, &b );
 M = a * b;
 L = 2 * ( a + b );
 printf( "%d %d\n", M, L );
 return 0;
}