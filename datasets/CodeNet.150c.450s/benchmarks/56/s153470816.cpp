#include <stdio.h>
int main(void){
long max, min, sum,  n;
int c, i;
max = 0;
min = 0;
sum = 0;
scanf("%d", &c);
if( c > 0 ) {
scanf("%ld", &n);
max = n;
min = n;
sum = n;
}
for( i = 1; i < c; ++i) {
scanf("%ld", &n);
sum+=n;
min = n > min ? min : n;
max = n < max ? max : n;
}
printf ("%ld %ld %ld\n", min, max, sum );
return 0;
}