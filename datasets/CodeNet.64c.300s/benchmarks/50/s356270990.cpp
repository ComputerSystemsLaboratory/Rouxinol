#include <stdio.h>
#define MAX_N (105)

static
void 
bubbleSort( int A[], int N )
{
    int i, j;
    int count = 0;
    for ( i = 0; i < N; i++ ) {
	int flag = 0;
	for ( j = N-1; j > i; j-- ) {
	    if ( A[j-1] > A[j] ) {
		int tmp = A[j-1];
		A[j-1] = A[j];
		A[j] = tmp;
		flag = 1;
		count++;
	    }
	}
	if ( !flag ) {
	    break;
	}
    }
    
    for ( i = 0; i < N; i++ ) {
	printf("%d%c", A[i], (i == N - 1) ? '\n' : ' ');
    }
    
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

    bubbleSort( A, N );

    return 0;
}