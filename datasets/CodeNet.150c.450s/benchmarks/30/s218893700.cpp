#include <stdio.h>
#define MAX_N (105)

static
void
swap( int A[], int i, int j )
{
    int tmp = A[i];
    A[i] = A[j];
    A[j] = tmp;

    return;
}


static
void
printArray( int A[], int N )
{
    int i;
    for ( i = 0; i < N; i++ ) {
	printf("%d%c", A[i], (i == N-1) ? '\n' : ' ');
    }
    
    return;
}


static
void 
selectionSort( int A[], int N )
{
    int i, j;
    int count = 0;
    for ( i = 0; i < N-1; i++ ) {
	int min_i = i;
	for ( j = i + 1; j < N; j++ ) {
	    if ( A[min_i] > A[j] ) {
		min_i = j;
	    }
	}
	
	if ( min_i != i ) {
	    swap( A, i, min_i );
	    count++;
	}
    }
    
    printArray( A, N );
    printf("%d\n", count);

    return;
}

int main()
{
    int i;
    int N;
    int A[MAX_N];
    scanf("%d", &N);

    for ( i = 0; i < N; i++ ) {
	scanf("%d", &A[i]);
    }

    selectionSort( A, N );

    return 0;
}