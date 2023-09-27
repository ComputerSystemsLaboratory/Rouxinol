#include <stdio.h>
#define MAX_N (22)

int n, q;
int A[MAX_N];

bool solve( int i, int m );

int main()
{
    scanf("%d", &n);

    for ( int i = 0; i < n; i++ ) {
	scanf("%d", &A[i]);
    }

    scanf("%d", &q);
    
    for ( int i = 0; i < q; i++ ) {
	int m;
	scanf("%d", &m);
	if ( solve( 0, m ) ) {
	    printf("yes\n");
	}
	else {
	    printf("no\n");
	}
    }

    return 0;
}


bool solve( int i, int m )
{
    if ( m == 0 ) {
	return true;
    }

    if ( m < 0 ) {
	return false;
    }

    if ( i >= n ) {
	return false;
    }
   
    if ( solve( i + 1, m ) ) return true;
    if ( solve( i + 1, m - A[i] ) ) return true;
       
    return false;
}