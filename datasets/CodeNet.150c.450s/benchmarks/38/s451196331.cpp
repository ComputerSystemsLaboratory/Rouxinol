/*
    2014.07.04 1250~1255
    C language Lecture week ∞
*/

#include <stdio.h>
#include <string.h>

int rtri_chk ( int a, int b, int c );

int main (void) {
    
    // 三角形の辺の長さ用
    int a;
    int b;
    int c;
    
    int max;
    
    scanf ( "%d", &max );
    
    for ( int cnt = 0; cnt < max; cnt ++ ) {
        scanf ( "%d", &a );
        scanf ( "%d", &b );
        scanf ( "%d", &c );
        if ( rtri_chk ( a, b, c ) ) {
            printf ( "YES\n" );
        } else {
            printf ( "NO\n" );
        }
    }
    
    return 0;
    
}

int rtri_chk ( int a, int b, int c ) {
    
    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;
    if ( a2 == b2 + c2 || b2 == a2 + c2 || c2 == a2 + b2 ) {
        return 1;
    } else {
        return 0;
    }
    
}