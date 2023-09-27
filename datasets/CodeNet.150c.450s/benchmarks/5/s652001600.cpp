#include <stdio.h>
int main(void) {
int n,i;
int a[100];
scanf("%d", &n);
for(i=0;i<n;++i){
scanf("%d",&a[i]);
}
if( n > 0 ) {
printf( "%d", a[n-1]);
for(i=1;i<n;++i){
printf(" %d", a[n-i-1]);
}
}
putchar('\n');
return 0;
}