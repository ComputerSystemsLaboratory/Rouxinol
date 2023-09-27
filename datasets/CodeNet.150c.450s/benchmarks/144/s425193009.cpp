#include <stdio.h>
long a[100][100],b[100][100],c[100][100];

int main(void) {
    int n,m,l;
    scanf( "%d %d %d", &n, &m, &l );
    for( int i=0; i<n; i++ ) {
        for( int j=0; j<m; j++ ) {
            scanf( "%ld", &a[i][j] );
        }
    }
    for( int i=0; i<m; i++ ) {
        for( int j=0; j<l; j++ ) {
            scanf( "%ld", &b[i][j] );
        }
    }
    for( int i=0; i<n; i++ ) {
        for( int j=0; j<l; j++ ) {
            for( int k=0; k<m; k++ ){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for( int i=0; i<n; i++ ) {
        for( int j=0; j<l; j++ ) {
            if( j ) printf( " " );
            printf( "%ld", c[i][j] );
        }
        printf( "\n" );
    }
    return 0;
}
