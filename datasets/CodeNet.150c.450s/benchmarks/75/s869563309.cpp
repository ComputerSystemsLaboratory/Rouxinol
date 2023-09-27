#include <stdio.h>

#define MAX_H (500010)
#define PARENT_ID(i) (i >> 1)
#define LEFT_ID(i)   (i << 1)
#define RIGHT_ID(i)  ((i << 1) + 1)

void maxHeapify( int A[], int i, int H ) {
    int l = LEFT_ID(i);
    int r = RIGHT_ID(i);
    int max_index = i;
    int max_v = A[i];
    
    if ( l <= H && max_v < A[l] )  {
	max_index = l;
	max_v = A[l];
    }
    if ( r <= H && max_v < A[r] )  {
	max_index = r;
	max_v = A[r];
    }
    
    if ( max_index != i ) {
	int tmp = A[i]; A[i] = A[max_index]; A[max_index] = tmp;
	maxHeapify( A, max_index, H );
    }
    
}


int main()
{
    int H;
    int A[MAX_H + 1];

    scanf("%d", &H);
    
    for ( int i = 1; i <= H; i++ ) {
	scanf("%d", &A[i]);
    }

    for ( int i = (H/2); i > 0; i-- ) {
	maxHeapify( A, i, H );
    }

    for ( int i = 1; i <= H; i++ ) {
	printf(" %d", A[i]);
    }

    printf("\n");
    
    return 0;
}