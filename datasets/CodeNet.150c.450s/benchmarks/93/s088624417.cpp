#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_N (100010)
#define INF (1e9 + 10)
typedef struct {
    char suit;
    int num;
} Card;


void quickSort( Card C[], int left, int right );
int partition( Card C[], int left, int right );
void swap( Card C[], int i, int j );

void mergeSort( Card A[], int left, int right );
void merge( Card A[], int left, int mid, int right );



int main()
{
    int n;
    Card C[MAX_N];
    Card C1[MAX_N];
    bool isStable = true;

    scanf("%d", &n);

    for ( int i = 0; i < n; i++ ) {
	scanf(" %c %d", &C[i].suit, &C[i].num);
	C1[i] = C[i];
    }
    
    quickSort( C,  0, n-1 );
    mergeSort( C1, 0, n );
    
    for ( int i = 0; i < n; i++ ) {
	if ( C1[i].suit != C[i].suit ) {
	    isStable = false;
	}
    }
    if ( isStable ) {
	printf("Stable\n");
    }
    else {
	printf("Not stable\n");
    }


    for ( int i = 0; i < n; i++ ) {
	printf("%c %d\n", C[i].suit, C[i].num);
    }


    return 0;
}


void quickSort( Card C[], int left, int right )
{
    if ( right > left ) {
	int part = partition( C, left, right );
	quickSort( C, left, part - 1 );
	quickSort( C, part + 1, right );	
    }
}


int partition( Card C[], int left, int right )
{
    int x = C[right].num;

    int i = left - 1;
    for ( int j = left; j < right; j++ ) {
	if ( C[j].num <= x ) {
	    i++;
	    swap( C, i, j );
	}
    }

    i++;
    swap( C, i, right );
    
    return i;
}


void swap( Card C[], int i, int j )
{
    Card tmp = C[i];
    C[i] = C[j];
    C[j] = tmp;
}




void mergeSort( Card C[], int left, int right )
{
    if ( left + 1 < right ) {	// ????´????2??\???????????´???
	int mid = ( left + right ) >> 1;
	mergeSort( C, left, mid );
	mergeSort( C, mid, right );	
	merge( C, left, mid, right );
    }
    
    return;
}




void merge( Card C[], int left, int mid, int right )
{
    int num_left  = mid - left;
    int num_right = right - mid;
    Card *L = (Card *)malloc( (1 + num_left)  * sizeof(Card) );
    Card *R = (Card *)malloc( (1 + num_right) * sizeof(Card) );
    int i_left = 0;
    int i_right = 0;

    memcpy(L, &C[left], sizeof(Card) * num_left);
    memcpy(R, &C[mid],  sizeof(Card) * num_right);
    L[num_left].num = R[num_right].num = INF;

    for ( int k = left; k < right; k++ ) {
	if ( L[i_left].num <= R[i_right].num ) {
	    C[k] = L[i_left];
	    i_left++;
	}
	else {
	    C[k] = R[i_right];
	    i_right++;
	}
    }
    
    free(L);
    free(R);

    return;
}