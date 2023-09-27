#include <stdio.h>
#include <string.h>

int main ( void ) {

    char a[200], b[200];
    int n, m;

    while ( 1 ) {

        scanf ( "%s", a );
        if ( strcmp ( a, "-" ) == 0 ) break;
        
        scanf ( "%d", &n );
        int l = strlen ( a );

        for ( int i = 0; i < n; i++ ) {
            scanf ( "%d", &m );
            for ( int j = 0, k = m; j < l - m; j++, k++ ){
                b[j] = a[k];
            }
            for ( int j = l - m, k = 0; j < l; j++, k++ ){
                b[j] = a[k];
            }
            for ( int j = 0; j < l; j++ ) {
                a[j] = b[j];
            }
        }

        printf ( "%s\n", a );

    }

    return 0;
}
