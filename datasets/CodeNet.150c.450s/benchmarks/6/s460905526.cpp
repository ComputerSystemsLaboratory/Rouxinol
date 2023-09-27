#include <stdio.h>

int main(){
    int x[3];
    scanf( "%d %d %d",&x[0],&x[1],&x[2] );

    if( x[0] < x[1] && x[1] < x[2] ) printf( "Yes\n" );
    else printf( "No\n" );
    return 0;
}