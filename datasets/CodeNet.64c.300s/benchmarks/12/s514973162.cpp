#include <stdio.h>

int main() {
 int x, X, i;
 scanf( "%d", &x );
 X = x;
 for( i = 0; i < 2; i++ ) {
   X *= x;
 }
 printf( "%d\n", X );
 return 0;
}