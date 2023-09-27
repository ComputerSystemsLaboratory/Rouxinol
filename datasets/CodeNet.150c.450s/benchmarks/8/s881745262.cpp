#include <stdio.h>
#include <string.h>

int main ( void ) {
    
    int n, c1 = 0, c2 = 0;
    char s1[100], s2[100];
    scanf ( "%d", &n );

    for ( int i = 0; i < n; i++ ) {
        scanf ( "%s %s", s1, s2 );
        if ( strcmp ( s1, s2 ) == 0 ) {
            c1++, c2++;
        } else if ( strcmp ( s1, s2 ) > 0 ) {
            c1 += 3;
        } else {
            c2 += 3;
        }
    }

    printf ( "%d %d\n", c1, c2 );

    return 0;
}
