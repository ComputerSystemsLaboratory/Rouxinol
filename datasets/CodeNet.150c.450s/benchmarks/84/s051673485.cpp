#include <stdio.h>
#include <algorithm>

#define MAX_N (200010)
#define HALF_MAX_N ( MAX_N / 2 )
#define INF (1e9 + 10)
typedef long long int ll;
int A[MAX_N];
int C[MAX_N];
int L[HALF_MAX_N];
int R[HALF_MAX_N];

void mergeSort( int A[], int left, int right );
void merge( int A[], int left, int mid, int right );

int main()
{
    int n;
    ll ans = 0;

    scanf("%d", &n);

    for ( int i = 0; i < n; i++ ) {
	scanf("%d", &A[i]);
    }
    
    mergeSort( A, 0, n );

    for ( int i = 0; i < n; i++ ) {
	ans += C[i];
    }

    printf("%lld\n", ans);

    return 0;
}


void mergeSort( int A[], int left, int right )
{
    if ( right - left > 1 ) {
	int mid = ( left + right ) >> 1;
	mergeSort( A, left, mid );
	mergeSort( A, mid, right );
	merge( A, left, mid, right );
    }
}

void merge( int A[], int left, int mid, int right )
{
    int i = 0;
    int j = 0;

    for ( int k = left; k < mid; k++ ) {
	L[i] = A[k];
	i++;
    }
    for ( int k = mid; k < right; k++ ) {
	R[j] = A[k];
	j++;
    }
    
    L[i] = R[j] = INF;
    
    i = j = 0;

    for ( int k = left; k < right; k++ ) {
	if ( L[i] <= R[j] ) {
	    A[k] = L[i];
	    i++;
	}
	else {
	    A[k] = R[j];
	    C[k] += ( (mid - left) - i );
	    j++;
	}
    } 
}