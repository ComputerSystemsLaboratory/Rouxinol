#include <stdio.h>
#include <string.h>

int main ( void ) {
    
    char str[1000], str2[1000], str3[1000], s[7];
    int q, a, b;

    scanf ( "%s %d", str, &q );

    for ( int i = 0; i < q; i++ ) {

        scanf ( "%s", s );

        if ( strcmp ( s, "print" ) == 0 ) {
            scanf ( "%d %d", &a, &b );
            for ( int j = a; j < b + 1; j++ ) {
                printf ( "%c", str[j] );
            }
            printf ( "\n" );
        }

        else if ( strcmp ( s, "reverse" ) == 0 ) {
            scanf ( "%d %d", &a, &b );
            for ( int j = a, k = b; j < b + 1; j++, k-- ) {
                str2[k] = str[j];
            }
            for ( int j = a; j < b + 1; j++ ) {
                str[j] = str2[j];
            }
        }

        else if ( strcmp ( s, "replace" ) == 0 ) {
            scanf ( "%d %d %s", &a, &b, str3 );
            for ( int j = a, k = 0; j < b + 1; j++, k++ ){
                str[j] = str3[k];
            }
        }

    }
    
    return 0;
}
