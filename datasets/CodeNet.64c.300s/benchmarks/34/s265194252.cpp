#include <stdio.h>
#define MAX_N (105)

int A[MAX_N];

static
void
checkArray( int *p_A, int N ) {
    int i;
    for ( i = 0; i < N; i++ ) {
	printf("%d%c", p_A[i], (i == N-1) ? '\n' : ' ');
    }
}


static
void
insertionSort( int *p_A, int N )
{
    int i;
    for ( i = 1; i < N; i++ ) {
	int v = p_A[i];
	int j = i - 1;

	checkArray( p_A, N );

	while ( j >= 0 && v < p_A[j] ) {
	    p_A[j+1] = p_A[j];
	    j--;
	}
	p_A[j+1] = v;
    }

    checkArray( p_A, N );
}

int main()
{
    int N;
    int i;
    scanf("%d", &N);
    
    for ( i = 0; i < N; i++ ) {
	scanf("%d", &A[i]);
    } 
    
    insertionSort( A, N );


    return 0;
}