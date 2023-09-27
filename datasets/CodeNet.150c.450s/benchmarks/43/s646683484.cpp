#include <stdio.h>

int main( void )
{
        while( 1 ) {
                int n ;
                scanf("%d", &n);
                if( !n ) break ;
                int A=0, B=0;
                for( int i = 0 ; i < n ; i++ ) {
                        int a, b ;
                        scanf("%d %d", &a, &b);
                        if( a > b ) A+=a+b;
                        else
                        if( a < b ) B+=a+b;
                        else {
                                A+=a;
                                B+=b;
                        }
                }
                printf("%d %d\n", A, B );
        }
        return 0;
}