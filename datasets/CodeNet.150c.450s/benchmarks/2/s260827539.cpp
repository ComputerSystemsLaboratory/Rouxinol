#include <stdio.h>

int partition( int A[], int p, int r );
void swap( int A[], int i, int j );

#define MAX_N (100010)
int A[MAX_N];

int main()
{
    int n;
    scanf("%d", &n);
    
    for ( int i = 0; i < n; i++ ) {
	scanf("%d", &A[i]);
    }

    int index_partition = partition( A, 0, n-1 );

    for ( int i = 0; i < n; i++ ) {
	if ( i == index_partition ) {
	    printf("[%d]", A[i]);
	}
	else {
	    printf("%d", A[i]);
	}
	printf("%c", (i == n-1) ? '\n' : ' ');
    }

    return 0;
}


int partition( int A[], int p, int r )
{
    int part = A[r];
    int i = p - 1;
    
    for ( int j = p; j < r; j++ ) {
	if ( A[j] <= part ) {
	    i++;
	    swap( A, i, j );
	}
    }

    i++;
    swap( A, i, r );

    return i;
}


void swap( int A[], int i, int j )
{
    int tmp = A[i];
    A[i] = A[j];
    A[j] = tmp;
}