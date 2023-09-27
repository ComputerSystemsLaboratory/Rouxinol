#include <stdio.h>
#include <string.h>
#define MAX_K (10010)
#define MAX_N (2000010)

void CountingSort( int A[], int B[], int k );

int n;

int A[MAX_N];
int B[MAX_N];
int C[MAX_K + 1];

int main()
{
    scanf("%d", &n);
    for ( int i = 0; i < n; i++ ) {
	scanf("%d", &A[i]);
    }

    CountingSort( A, B, MAX_K );
    for ( int i = 0; i < n; i++ ) {
	printf("%d%c", B[i], (i == n - 1) ? '\n' : ' ');
    }

    return 0;
}



void CountingSort( int A[], int B[], int k )
{
    memset( C, 0, (k + 1) * sizeof(int) );

    for ( int i = 0; i < n; i++ ) {
	C[A[i]]++;
    }

    for ( int i = 1; i <= k; i++ ) {
	C[i] = C[i] + C[i-1];
    }

    for ( int i = n - 1; i >= 0; i-- ) {
	B[C[A[i]] - 1] = A[i];
	C[A[i]]--;
    }
}