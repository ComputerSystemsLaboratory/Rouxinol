#include <cstdio>

int main(){

int x, y ;

	while(1){

scanf("%d %d", &x, &y);

if ( x * x + y * y == 0) break;

else if (x <= y) printf("%d %d\n", x, y);

else printf ("%d %d\n", y, x);

}

    return 0;

}
