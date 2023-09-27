#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define INF (1e9 + 10)
#define MAX_N (500010)

void mergeSort( int A[], int left, int right );
void merge( int A[], int left, int mid, int right );

int num_compare = 0;

int main()
{
    int n;
    int A[MAX_N];
    
    scanf("%d", &n);

    for ( int i = 0; i < n; i++ ) {
	scanf("%d", &A[i]);
    }
    
    mergeSort( A, 0, n );

    for ( int i = 0; i < n; i++ ) {
	printf("%d%c", A[i], (i == n-1) ? '\n' : ' ');
    }

    printf("%d\n", num_compare);

    return 0;
}



void mergeSort( int A[], int left, int right )
{
    if ( left + 1 < right ) {	// ????´????2??\???????????´???
	int mid = ( left + right ) >> 1;
	mergeSort( A, left, mid );
	mergeSort( A, mid, right );	
	merge( A, left, mid, right );
    }
    
    return;
}




void merge( int A[], int left, int mid, int right )
{
    int num_left  = mid - left;
    int num_right = right - mid;
    int *L = (int *)malloc( (1 + num_left)  * sizeof(int) );
    int *R = (int *)malloc( (1 + num_right) * sizeof(int) );
    int i_left = 0;
    int i_right = 0;

    memcpy(L, &A[left], sizeof(int) * num_left);
    memcpy(R, &A[mid],  sizeof(int) * num_right);
    L[num_left] = R[num_right] = INF;

    for ( int k = left; k < right; k++ ) {
	if ( L[i_left] < R[i_right] ) {
	    A[k] = L[i_left];
	    i_left++;
	}
	else {
	    A[k] = R[i_right];
	    i_right++;
	}
	num_compare++;
    }
    
    free(L);
    free(R);

    return;
}