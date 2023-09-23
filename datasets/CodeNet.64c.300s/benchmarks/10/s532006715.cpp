#include <stdio.h>
int main(void) {
int a, b, w;
while(scanf("%d",&a), scanf("%d",&b), a != 0 || b != 0 ) {
if( a > b ){
printf( "%d %d\n", b, a );
}else {
printf( "%d %d\n", a, b );
}

}

return 0;
}