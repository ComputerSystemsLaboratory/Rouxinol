#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main ( void ) {
    
    char word[10];
    char input[1000];
    int counter = 0;
    
    scanf ( "%s", word );
    
    while ( 1 ) {
        scanf ( "%s", input );
        if ( strcmp ( input, "END_OF_TEXT" ) == 0 ) {
            break;
        } else {
            for ( int i = 0; input[i] != '\0'; i++ ) {
                input[i] = tolower( input[i] );
            }
        }
        if ( strcmp ( word, input ) == 0 ) counter += 1;
    }

    printf ( "%d\n", counter );

    return 0;
}
